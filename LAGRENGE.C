
 /*                     PROGRAM NO.8
   Name:Pooja Pathak
   

  1. OBJECTIVE:Program to implement LAGRENGE'S Method
  2. METHOD:
  0
    step1:Give the no. of observation.
	step2:Initialize the value of x and y.
	step3:Now,find the value of differences of x and y.
	step4:Find the value of h.
	step5:Find the value of p.
	step6:Now,find the value of y.
     
  3. PROGRAM:
  */
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
float x[5],y[5],q=0,sum=0,x0;
clrscr();
printf("\n ENTER THE NO. OF OBSERVATION...=>");
scanf("%d",&n);
printf("\n ENTER THE VALUE OF X...=>");
for(i=0;i<n;i++)
scanf("%f",&x[i]);
printf("\n ENTER THE VALUE OF Y...=>");
for(i=0;i<n;i++)
scanf("%f",&y[i]);
printf("\n ENTER THE VALUE OF X0...=>");
scanf("%f",&x0);


for(i=0;i<n;i++)
{
q=1;
for(j=0;j<n;j++)
{
if(i!=j)
{
q=(q*(x0-x[j]))/(x[i]-x[j]);
}
}
sum=sum+(q*y[i]);
}
printf("\nSUM IS: %.3f",sum);
getch();
}

/*
 4.OUTPUT:-

 ENTER THE NO. OF OBSERVATION...=>4

 ENTER THE VALUE OF X...=>1 2 7 8

 ENTER THE VALUE OF Y...=>1 5 5 4

 ENTER THE VALUE OF X0...=>6
  SUM IS: 6.238
 */                                                                             
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

