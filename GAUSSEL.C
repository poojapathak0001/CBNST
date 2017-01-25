/*                           Program-12
   Name:Pooja Pathak
1)OBJECTIVE:IMPLEMENTATION OF GAUSS ELEMINATION METHOD

2)METHOD:	step1:enter the elements in the matrix.
            step2:find the upper triangular matrix.
	        step3:now, find the values of the unknowns.

3)PROGRAM:
*/
#include<conio.h>
#include<stdio.h>
int main()
{
	float a[10][11],x[10],s,t;
	int i,j,n,k;
	printf("\nenter the no. of unknowns=");
	scanf("%d",&n);
	printf("\nenter the values in the matix=");
	for(i=0;i<n;i++)
		for(j=0;j<=n;j++)
			scanf("%f",&a[i][j]);
	
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			t=a[j][i]/a[i][i];
			for(k=0;k<=n;k++)
				a[j][k]=a[j][k]-a[i][k]*t;
		}
	printf("\n\tthe new matrix=\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<=n;j++)
			printf("\t%.4f",a[i][j]);
		printf("\n");
	}
	for(i=n-1;i>=0;i--)
	{
		s=0;
		for(j=i+1;j<n;j++)
			s=s+a[i][j]*x[j];
		x[i]=(a[i][n]-s)/a[i][i];
	}
	printf("\n\tthe solution is=");
	for(i=0;i<n;i++)
		printf("\n\tx[%d]->%.4f",i+1,x[i]);
	getch();
	return 0;
}
/*
4)OUTPUT:

        enter the no. of unknowns..=3

        enter the values in the matix..=6
3
2
6
6
4
3
0
20
15
12
0

        the new matrix..=
        6.0000  3.0000  2.0000  6.0000
        0.0000  1.0000  1.0000  -6.0000
        0.0000  0.0000  0.3333  10.0000

        the solution is..=
        x[1]->9.0000
        x[2]->-36.0000
        x[3]->30.0000
*/
