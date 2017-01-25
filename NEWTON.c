 /*                        PROGRAM NO.5
   Name:Pooja Pathak
   
  1. OBJECTIVE:Program to implement NEWTON RAPHSON Method
  2. METHOD:
       Step1:Find two values x1 and x2 such that f(x1)*f(x2)<0
       Step2:Find f'(x1)
       Step3:if[f(x1)]<[f(x2)],x0=x1,else x0=x2;
       Step4:x2=x1-f(x1)/f'(x1)
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
float df(float x)
{
return(3*x*x-4);
}
main()
{
int itr=0,maxitr;
float aerr,h,x0,x1;
printf("\n enter the no.x0,allowed error,maximum iteration");
scanf("%f%f%d",&x0,&aerr,&maxitr);
for(itr=1;itr<=maxitr;itr++)
{
h=f(x0)/df(x0);
x1=x0-h;
printf("\n iteration no. %d,x=%.6f \n",itr,x1);
if(fabs(x1-x0)<aerr)
{
printf("after %d iteration,root=%.6f \n",itr,x1);
getch();
return 0;
}
x0=x1;
}
printf("\n solution does not converge less no. of iteration");
return(1);
getch();
}

/*4. OUTPUT:
 enter the no.x0,allowed error,maximum iteration
3
.0001
14

 iteration no. 1,x=2.739130

 iteration no. 2,x=2.706998

 iteration no. 3,x=2.706528

 iteration no. 4,x=2.706528

after 4 iteration,root=2.706528
*/













                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
















