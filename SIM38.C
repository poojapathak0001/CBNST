/*                           PROGRAM-10

   Name:Pooja Pathak
   
   
1.OBJECTIVE:-Program to impliment Simpson 3/8 Rule
2.METHOD:-
        Step 1. Give the values of n, lower limit and upper limit.
        Step 2. Find the value of h.
        Step 3. Use the trapezodial formula.
        Step 4. Display the result./*  
       

3.PROGRAM:-
*/
#include<conio.h>
#include<stdio.h>
float f(float x)
{
	return(1.0/(1+x));
}
int main()
{
	float ll, ul, h, x[10], fx[10], y, y1, y2, y3;
	int i, n;
	printf("\nENTER THE VALUE OF N : ");
	scanf("%d", &n);
	printf("\nENTER THE LOWER LIMIT : ");
	scanf("%f", &ll);
	printf("\nENTER THE VALUE OF HIGHER LIMIT : ");
	scanf("%f", &ul);
	h=(ul-ll)/n;

	for(i=0;i<=n;i++)
	{
		x[i] = ll+(i*h);
		fx[i]=f(x[i]);
	}

	for(i=0;i<=n;i++)
	{
		printf("%d	%f	%f\n",i,x[i],fx[i]);
	}

	y1=fx[0]+fx[n];
	for(i=1;i<=n-1;i++)
	{
		if(i%3==0)
		{
			y2+=f(x[i]);
		}
		else
		y3+=f(x[i]);
	}
	y=(y1+2*y2+3*y3)*((3*h)/8);
	printf("\nSOLUTION IS: %f", y);
getch();
}

/*4.OUTPUT:-


ENTER THE VALUE OF N : 6                                                        
                                                                                
ENTER THE LOWER LIMIT : 0                                                       
                                                                                
ENTER THE VALUE OF HIGHER LIMIT : 6                                             
0       0.000000        1.000000                                                
1       1.000000        0.500000                                                
2       2.000000        0.333333                                                
3       3.000000        0.250000                                                
4       4.000000        0.200000                                                
5       5.000000        0.166667                                                
6       6.000000        0.142857                                                
                                                                                
SOLUTION IS: 1.966071  */
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
