#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,temp,n,a,f,m,l,s,arr[100];
clrscr();
printf("Enter no. of elements \n");
scanf("%d",&a);
printf("Enter integers \n");
for(n=0;n<a;n++)
scanf("%d",&arr[n]);
for(i=1;i<=n-1;i++)
{
j=i;
while(j>0&&arr[j]<arr[j-1])
{
temp=arr[j];
arr[j]=arr[j-1];
arr[j-1]=temp;
j--;
}
}
printf("ascending order: \n");
for(i=0;i<=n-1;i++) {
printf("%d \n",arr[i]);
}
printf("Enter no. which you are finding \n");
scanf("%d",&s);
f=0;
l=n-1;
while(f<=l)
{
m=(f+l)/2;
if(arr[m]==s)
{
printf("%d found at position %d",s,m+1);
break;
}
else if(arr[m]<s)
{
f=m+1;
}
else
{
l=m-1;
}
}
if(f>l)
printf("not found ");
getch();
}

