/*               PROGRAM NO.9

   Name:Pooja Pathak
   
1.OBJECTIVE:-Program to implement Simpson's 1/3 Rule
2.METHOD:-

    Step 1. Give the values of n, lower limit and upper limit.
    Step 2. Find the value of h= xn-x0/n.
    Step 3. Use the trapezodial formula.
    Step 4. Display the result.

3.PROGRAM:-
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
    return(1/(1+(x*x)));
}

int main()
{
    float h,x[20],fx[20],y,y1,y2,y3,ll,ul;
    int i,n;
    printf("\n ENTER THE VALUE OF LOWER LIMIT AND UPPER LIMIT...=>");
    scanf("%f%f",&ll,&ul);
    printf("ENTER THE VALUE OF n->");
    scanf("%d",&n);
    h=((ul-ll)/n);
    for(i=0;i<=n;i++)
     {
       x[i]=ll+(h*i);
       fx[i]=f(x[i]);
     }

     for(i=0;i<=n;i++)
     {
      printf("%d %f %f\n",i,x[i],fx[i]);
     }
     y1=fx[0]+fx[n]; 
     for(i=1;i<=n-1;i++)
      {
       if(i%2==0)
	 y2=y2+fx[i];
       else
	 y3=y3+fx[i];
      }
     y=(y1+(4*y3)+(2*y2))*(h/3);
     printf("THE SOLUTION IS->%f",y);
     getch();
     }


     /*4.OUTPUT:-

 ENTER THE VALUE OF LOWER LIMIT AND UPPER LIMIT...=>0 1
 ENTER THE VALUE OF n...=>4
  0 0.000000 1.000000
  1 0.200000 0.961538
  2 0.400000 0.862069
  3 0.600000 0.735294
  4 0.800000 0.609756
  5 1.000000 0.500000
 THE SOLUTION IS...=>0.784732
  */
