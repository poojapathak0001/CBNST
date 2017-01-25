   /*            PROGRAM NO.1  
  NAME:Pooja Pathak
  
  1. OBJECTIVE:Program to implement BISECTION Method.
  
  2. ALGORITHM:
  
       Step1: Find two values x1 and x2 such that f(x1)*f(x2)<0
       Step2: Bisect (a,b) into two halves(x1,x) and
       Step3: if[f(x1)]<[f(x2)],x0=x1,else x0=x2;
       Step4: x2=x1-f(x)/f'(x)
       Step5: Stop the procedure after a specified no.
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
void bisect(float *x,float a,float b,int *itr)
{
*x=(a+b)/2;
++(*itr);
printf("iteration no. %3dx=%75f\n",*itr,*x);
}
main()
{
int itr=0,max_itr;
float a,b,aerr,x,x1;
printf("enter the value of a,b,allowed error,maximum iteration\n");
scanf("%f%f%f%d",&a,&b,&aerr,&max_itr);
bisect(&x,a,b,&itr);
do
{
if(f(a)*f(x)<0)
b=x;
else
a=x;
bisect(&x1,a,b,&itr);
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

/* 4.OUTPUT:-
enter the value of a,b,allowed error,maximum iteration
2
3
.0001
14
iteration no.   1x=
      2.500000
iteration no.   2x=
      2.750000
iteration no.   3x=
      2.625000
iteration no.   4x=
      2.687500
iteration no.   5x=
      2.718750
iteration no.   6x=
      2.703125
iteration no.   7x=
      2.710938
iteration no.   8x=
      2.707031
iteration no.   9x=
      2.705078
iteration no.  10x=
      2.706055
iteration no.  11x=
      2.706543
iteration no.  12x=
      2.706299
iteration no.  13x=
      2.706421
iteration no.  14x=
      2.706482
after 14 iteration,root=2.706482
*/


                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
