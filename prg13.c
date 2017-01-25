
                     PROGRAM NO. 13
/*
NAME:Pooja Pathak
  
1.OBJECTIVE:To implement curve fitting method to Fit a line.

2.ALGORITHM:
  Step 1: Input the values for x and y.
  Step 2: Put the values from normal equation to the matrix.
  Step 3: Apply Gauss Jordan method to solve the matrix.
  Step 4: Display the solution in form of the respective equation.

3.PROGRAM: */

#include<stdio.h>
#include<conio.h>

void main()
{       int n,i,j,k;
	float t,m[2][3],a[10],x[10],y[10],sx=0,sy=0,sxy=0,sx2=0;
	clrscr();
	printf("\nEnter the no. of observations:");
	scanf("%d",&n);
	printf("\nEnter the values of x and y:\n");
	for(i=0;i<n;i++)
		scanf("%f%f",&x[i],&y[i]);

	for(i=0;i<n;i++)
	{
		sx+=x[i];
		sy+=y[i];
		sxy+=x[i]*y[i];
		sx2+=x[i]*x[i];
	}
	m[0][0]=n;m[0][1]=sx;m[0][2]=sy;
	m[1][0]=sx;m[1][1]=sx2;m[1][2]=sxy;
	for(j=0;j<2;j++)
	  for(i=0;i<3;i++)
	   if(i!=j)
	   {
	      t=m[i][j]/m[j][j];
	      for(k=0;k<3;k++)
		m[i][k]-=m[j][k]*t;
	   }
	   //for diagonal matrix
	   printf("\n\nThe diagonal matrix is:\n\n");
	   for(i=0;i<2;i++)
	   {
	     for(j=0;j<3;j++)
	       printf("%.3f\t",m[i][j]);
	     printf("\n");
	   }

	   for(i=0;i<2;i++)
	     a[i]=m[i][2]/m[i][i];

	   printf("The solution is:\n");
	   printf("\n\nY=(%.3f)+(%.3f)X",a[0],a[1]);
getch();
}
/*4.OUTPUT:

Enter the no. of observations:5                                                 
                                                                                
Enter the values of x and y:                                                    
0 1                                                                             
1 1.8                                                                           
2 3.3                                                                           
3 4.5                                                                           
4 6.3                                                                           
                                                                                
                                                                                
The diagonal matrix is:                                                         
                                                                                
5.000   0.000   3.600                                                           
0.000   10.000  13.300                                                          
The solution is:                                                                
                                                                            
Y=(0.720)+(1.330)X
*/

