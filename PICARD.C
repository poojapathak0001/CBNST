/*          Program no 15
 
 
 Name:Pooja Pathak

 1. OBJECTIVE: To implement Picard's Method.
 2. ALGORITHM:
	Step 1:Input f(x,y),x0,y0 and error tolerence E
	Step 2: Compute 1st approximation by
		y1=y0+intg[x0,,x]f(x,y)dx
	Step 3:Compute sequence of approximation by:
	       y(i+1)=y0+int[x0,x](f(x,yi)dx)
		   where i=1,2,3....
	Step 4:Stop when |y(i+1)-y(i)|<E
 3.PROGRAM:
*/
 #include<stdio.h>
 #include<conio.h>
 #include<math.h>
 //dy/dx=x+y
 #define Y1(x) (1+(x)+pow(x,2)/2)
 #define Y2(x) (1+(x)+pow(x,2)+pow(x,3)/6)
 #define Y3(x) (1+(x)+pow(x,2)+pow(x,3)/3+(x,4)/24)
 #define Y4(x) (1+(x)+pow(x,2)+pow(x,3)/3+pow(x,4)/24+pow(x,5)/120)

 int main()
 {
  double y1[20],y2[20],y3[20],y4[20],a,n,h,i;
  int j;

  printf("\n Enter the value of range:");
  scanf("%lf %lf",&a,&n);
  printf("\n\n Enter h:");
  scanf("%lf",&h);
  for(i=a,j=0;i<=n;i=i+h,j++)
  {
   y1[j]=Y1(i);
   y2[j]=Y2(i);
   y3[j]=Y3(i);
   y4[j]=Y4(i);
  }
  printf("\nX |");
  for(i=a;i<=n;i=i+h)
  {
   printf("  %.3lf",i);
  }
  printf("\n------------------------------------------");
  printf("\n\nY1|");
  for(i=a,j=0;i<=n;i=i+h,j++)
  {
   printf("  %.3lf",y1[j]);
  }
  printf("\n\nY2|");
    for(i=a,j=0;i<=n;i=i+h,j++)
  {
   printf("  %.3lf",y2[j]);
  }
  printf("\n\nY3|");
    for(i=a,j=0;i<=n;i=i+h,j++)
  {
   printf("  %.3lf",y3[j]);
  }
  printf("\n\nY4|");
    for(i=a,j=0;i<=n;i=i+h,j++)
  {
   printf("  %.3lf",y4[j]);
  }
  getch();
  return 0;
 }
/*
 4.OUTPUT:
  Enter value of range:5 6
  Enter h=1
  x: 5.000  6.000
  -------------------------------------------
  Y1: 18.500 25.000
  
  Y2: 51.833 79.000
  
  Y3: 72.667 115.00
  
  Y4: 124.750 233.800
*/
