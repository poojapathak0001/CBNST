	/*                   PROGRAM NO.4
   Name:Pooja Pathak
   
  1. OBJECTIVE:Program to implement SECANT Method
  2. METHOD:
       Step1:Find two values x0 and x1 such that
	           f(x1)*f(x0)<0
       Step2:Find x=(x1-((x1-x0)*f(x1)/(f(x1)-f(x0))))
       Step3:x0=x1 and x1=x
       Step4:Stop the procedure after a specified no.
       of iterations or when the width of the interval
       maintaing the root is less than a given tolerance.

  3. PROGRAM:
  */
#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
return(x*x*x-4*x-9);
}
void secant(float *x,float a,float b,int *itr)
{
*x=(b-((b-a)*f(b)/(f(b)-f(a))));
++(*itr);
printf("\n iteration the value of x%d is %f",*itr,*x);
}
main()
{
int itr=0,maxitr,flag=0;
float a,b,aerr,x,x1;
printf("\n enter the value of a and b:");
scanf("%f%f",&a,&b);
printf("\n roots between %f and %f",a,b);
printf("\n\n enter the of iteration and allowed error=");
scanf("%d%f",&maxitr,&aerr);
secant(&x,a,b,&itr);
do
{
a=b;
b=x;
secant(&x1,a,b,&itr);
if(fabs(x1-x)<aerr)
{
printf("\n the root of equation is %f after %d is iteration",x1,itr);
getch();
return 0;
}
x=x1;
}while(itr<maxitr);
printf("\n solution does not converge less no. of iteration");
return(1);
}
 /*
 4. OUTPUT:-
 enter the value of a and b:2 3

 roots between 2.000000 and 3.000000

 enter the of iteration and allowed error=14 .0001

 iteration the value of n is 
 iteration the value of n is -0.000000
 iteration the value of n is -2.000000
 iteration the value of n is 0.000000
 iteration the value of n is 2.000000
 the root of equation is 2.706528 after 5 is iteration
 */





                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
