/*          Program no 16


 Name:Pooja Pathak
 1. OBJECTIVE: To implement Euler's Method.
 2. ALGORITHM:
	Step 1:For a function f(x,y), get xn,x0,y0 and h
	Step 2:Find n using formula, n=(xn-x0)/h+1
	Step 3:Find yi uptill xn is found using formula:
	       y(i+1)=yi + h*f(xi,yi)
 3.PROGRAM:
*/
 #include<stdio.h>
 #include<conio.h>
 float f(float x, float y)
 {
  return (x-y)/(x+y);
 }
 int main()
 {
  int i,n;
  float x0,y0,h,xn,x,y;
  printf("\n Enter the values x0,y0,h,xn: ");
  scanf("%f%f%f%f",&x0,&y0,&h,&xn);
  n=(xn-x0)/h+1;
  for(i=1;i<=n;i++)
  {
   y=y0+h*f(x0,y0);
   x=x0+h;
   printf("\n X=%f Y=%f",x0,y0);
   if(x<xn)
   {
    x0=x;
    y0=y;
   }
  }
  getch();
  return 0;
 }
/*
 4.OUTPUT:
 Enter the Values x0,y0,h,xn : 0 1 2 9
 x=0.000000 y=1.000000
 x=2.000000 y=-1.000000
 x=4.000000 y=5.000000
 x=6.000000 y=4.777778
 x=8.000000 y=5.004582
*/
