#include<stdio.h>
int main()
{
int a[10],n,i,largest;
printf("\nEnter the size of an array:");
scanf("%d",&n);
printf("\nEnter the elements in an array:");
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
largest=a[0];
for(i=0;i<=n;i++)
{
if(a[i]>largest)
{
largest=a[i];
}
}
printf("\nThe largest num element is:%d",largest);
return 0;
}
