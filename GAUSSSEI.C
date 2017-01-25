/*          Program no 18


 Name:Pooja Pathak

 1. OBJECTIVE: To implement Gauss Siedal's Method.
 2. ALGORITHM:
	Step 1:For a system of equation defined as:
		a1x+b1y+c1z=d1
		a2x+b2y+c2z=d2
		a3x+b3y+c3z=d3
		assume x0=0,y0=0,z0=0
	Step 2:Input the maximum allowed error E
	Step 3:Find the value of Xi,Yi,Zi using formulae
	       x(i+1)=(d1-b1*y(i)-ci*(zi))/a1
	       y(i+1)=(d2-a2*x(i+1)-c2*z(i))/b2
	       z(i+1)=9d3-a3*x(i+1)-b3*y(i+1))/c3
	Step 4:Repeat Step 3 until absolute error of xi,yi,and zi
	       is less then E

 3.PROGRAM:
*/
 #include<stdio.h>
 #include<conio.h>
 #include<math.h>
 #define X1(x2,x3) ((17-20*(x2)+2*(x3))/20)
 #define X2(x1,x3) ((-18-3*(x1)+(x3))/20)
 #define X3(x1,x2) ((25-2*(x1)+3*(x2))/20)

 int main()
 {
  double x1=0,x2=0,x3=0,y1,y2,y3;
  float E;
  int i=0;
  printf("\n Enter the allowed error:");
  scanf("%f",&E);
  printf("\n______________________________________");
  printf("\n   x1\t\t   x2\t\t   x3\n");
  printf("\n______________________________________");
  printf("\n%f\t%f\t%f",x1,x2,x3);
  do
  {
   y1=X1(x2,x3);
   y2=X2(y1,x3);
   y3=X3(y1,y2);
   if((fabs(y1-x1)<E) && (fabs(y2-x2)<E) && (fabs(y3-x3)<E))
   {
     printf("\n______________________________________");
     printf("\n\nx1=%.3lf",y1);
     printf("\n\nx2=%.3lf",y2);
     printf("\n\nx3=%.3lf",y3);
     i=1;
   }
   else
   {
    x1=y1;
    x2=y2;
    x3=y3;
    printf("\n%f\t%f\t%f",x1,x2,x3);
   }
  }while(i!=1);
  getch();
  return 0;
 }
/*
 4.OUTPUT:
  Enter the allowed Error:0.0001
  
  _____________________________________
  x1               x2              x3
  
  _____________________________________
  0.000000      0.000000        0.000000 
  0.850000     -1.027500        1.010875
  1.978588     -1.146244        0.880205
  2.084265     -1.168629        0.866279
  2.105257     -1.172475        0.863603
  2.108835     -1.173145        0.863145
  2.109460     -1.173262        0.863065
  2.109568     -1.173282        0.863051
  
  ______________________________________
  
  x1=2.110
  
  x2=-1.173
  
  x3=0.863
*/
