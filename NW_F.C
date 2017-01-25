/* 						PROGRAM NO.6 
   
   Name:Pooja Pathak
   
1.OBJECTIVE : To implement the newton Forward Interpolation Formula : 

2.ALGORITHIM:

	step1:Give the no. of observation.
	step2:Initialize the value of x and y.
	step3:Now,find the value of differences of x and y.
	step4:Find the value of h.
	step5:Find the value of p.
	step6:Now,find the value of y.

3. PROGRAM: */


#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,n;
	float a[10][10],y,x,u1,u,k=1;
	clrscr();
	printf("\nENTER THE NO. OF OBSERVATION : ");
	scanf("%d",&n);
	printf("\nENTER THE VALUES OF X AND Y : ");
	for(j=0;j<n;j++)
	{
		for(i=0;i<2;i++)
		{
			scanf("%f",&a[j][i]);
		}
                                                                                                                                                    	}
	for(j=2;j<n+1;j++)
	{
		for(i=0;i<n+1-j;i++)
		{
			a[i][j]=a[i+1][j-1]-a[i][j-1];
		}
	}
	printf("\nDIFFRENCE TABLE IS AS : ");
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n+1-i;j++)
			printf("\t%.3f",a[i][j]);
	}
	printf("\nENTER THE VALUE OF X : ");
	scanf("%f",&x);
	u=(x-a[0][0])/(a[1][0]-a[0][0]);
	u1=u;
	y=a[0][1];
	for(i=2;i<n+1;i++)
	{
		y=y+(u1*(a[0][i]/k));
		u1=u1*(u-(i-1));
		k*=i;
	}
	printf("%.3f",y);
getch();
}

/* 4.OUTPUT :


ENTER THE NO. OF OBSERVATION : 5

ENTER THE VALUES OF X AND Y : 80
5026
85
5674
90
6362
95
7088
100
7854

DIFFRENCE TABLE IS AS :
80.000  5026.000  648.000 40.000  -2.000  4.000
85.000  5674.000  688.000 38.000  2.000
90.000  6362.000  726.000 40.000
95.000  7088.000  766.000
100.000 7854.000

ENTER THE VALUE OF X : 82
5280.106
*/












                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

