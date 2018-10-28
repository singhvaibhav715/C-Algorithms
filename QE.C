#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
 float a,b,c,det=0;
 float root1=0,root2=0;
 clrscr();
 printf("Enter a,b,c of axý+bx+c:\n");
 scanf("%f%f%f",&a,&b,&c);
 printf("Quadratic Equation:\t%0.2fxý+%0.2fx+%0.2f\n",a,b,c);
 det=pow(b,2)-4*a*c;
 if(det<0) //complex roots
 {
   root1= (-b+sqrt(-det))/2*a;
   root2= (-b-sqrt(-det))/2*a;
 }
 else  //real roots
 {
   root1=(-b+sqrt(det))/2*a;
   root2=(-b-sqrt(det))/2*a;
 }
 printf("Roots of the equation are:\t%0.2f\t%0.2f\n",root1,root2);
 getch();
}