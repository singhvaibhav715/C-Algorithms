#include<stdio.h>
#include<conio.h>
#include<time.h>

void main()
{
clock_t t;
int a[5],b[5],i,j;
clrscr();

printf("Enter 5 Numbers");
for(i=0;i<5;i++)
scanf("%d",&a[i]);

t = clock();

for(i=0;i<5;i++)
{
b[i] = 0;
for(j=0;j<4;j++)
{
b[i] += a[(i+j)%5];
}
}
for(i=0;i<5;i++)
{
printf("%d",b[i]);
}

for(i=0;i<4;i++)
{
if(b[i]<b[0])
b[0]=b[i];
else if(b[i]>b[4])
b[4]=b[i];
}

printf("Maximum %d",b[4]);
printf("\nMinimum %d",b[0]);

t = clock() - t;
printf("%d",((double)t/CLOCKS_PER_SEC));
getch();
}
