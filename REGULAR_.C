	/*                   PROGRAM NO.2
   Name:Pooja Pathak
   
  1. OBJECTIVE:Program to implement REGULA FALSI Method
  2. METHOD:
       Step1:Find two values x1 and x2 such that
	    f(x1)*f(x2)<0
       Step2:Find x=(x1*f(*x2)-x2*f(x1)/f(x2)-f(x1))
       Step3:If f(x1)*f(x)<0 then set x2=x and goto step2
       Step4:If f(x)*f(x2)<0 then set x1=x and goto step2
       Step5:Stop the procedure after a specified no.
       of iterations or when the width of the interval
       maintaing the root is less than a given tolerance.

  3. PROGRAM:
  */

#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
return (x*x*x-4*x-9);
}
void regula_falsi(float*x,float a,float b,int *itr)
{
*x=(a*f(b)-b*f(a))/(f(b)-f(a));
++(*itr);
printf("after %d iteration root is %f \n",*itr,*x);
}
main()
{
int itr=0,max_itr;
float a,b,aerr,x,x1;
printf("enter the value of a,b,allowed error,maximum iteration\n");
scanf("%f%f%f%d",&a,&b,&aerr,&max_itr);
regula_falsi(&x,a,b,&itr);
do
{
if(f(a)*f(x)<0)
b=x;
else
a=x;
regula_falsi(&x1,a,b,&itr);
if(fabs(x-x1)<aerr)
{
printf("after %d iteration,root=%f",itr,x1);
getch();
return 0;
}
x=x1;
}
while(itr<max_itr);
printf("solution does not converge");
return(1);
}
/*
OUTPUT:

enter the value of a.b,allowed error,maximum iteration
2
3
0.0001
14
after 1 iteration root is 2.60000
after 2 iteration root is 2.693252
after 3 iteration root is 2.704918
after 4 iteration root is 2.706333
after 5 iteration root is 2.706504
after 6 iteration root is 2.706525

after 6 iteration,root = 2.706525
*/
