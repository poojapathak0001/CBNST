                /*  PROGRAM NO.3
    Name:Pooja Pathak
  1. OBJECTIVE:Program to implement ITERATION Method
  2. METHOD:
       Step1:Find two values x1 and x2 such that f(x1)*f(x2)<0
       Step2:Create a function x=q(x)
       Step3:Find q'(x)
       Step4:If [q'(x1) and q'(x2)]<1
             choosen function is correct else goto step 2
             Find x2=q(x1).
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
return(x*x*x-4*x-9);
}
float fi(float x)
{
return(pow((4*x)+9,(1.0/3)));
}
float dfi(float x)
{
return((4/3)*(1/pow((4*x+9),(-2.0/3))));
}
main()
{
int itr=0,maxitr,flag=0;
float a,b,aerr,x,x1;
do
{
printf("\n enter the value of a and b:");
scanf("%f%f",&a,&b);
if(f(a)*f(b)<0)
{
printf("\n roots between %f and %f",a,b);
flag=0;
}
else
{
printf("\n\n wrong value");
flag=1;
}
}
while(flag==1);
printf("\n \n enter the no. of iteration and allowed errors");
scanf("%d%f",&maxitr,&aerr);
if (fabs(dfi(a))<=fabs(dfi(b)))
x=a;
else
x=b;
do
{
x1=fi(x);
++(itr);
printf("\n %d iteration the value of x is %f",itr,x);
if(fabs(x1-x)<aerr)
{
printf("\n the root of equation is %f after %d is iteration",x1,itr);
getch();
return 0;
}
x=x1;
}
while(itr<maxitr);
printf("\n solution does not converge less no. of iteration");
return(1);
}

/*
 4.OUTPUT:-
 enter the value of a and b:2 3

 roots between 2.000000 and 3.000000

 enter the no. of iteration and allowed errors 7 .0001

 1 iteration the value of x is 3.000000
 2 iteration the value of x is 2.758924
 3 iteration the value of x is 2.716032
 4 iteration the value of x is 2.708257
 5 iteration the value of x is 2.706843
 6 iteration the value of x is 2.706585
 the root of equation is 2.706538 after 6 is iteration
*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


















