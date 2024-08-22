#include<stdio.h>
void main()
{
int n,i,j,small,a[100],temp,time=0;
time++;
printf("Enter the number of elements");
time++;
scanf("%d",&n);
time++;
printf("Enter the elements");
time++;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
time++;
}
for(i=0;i<n-1;i++)
{
small=i;
time++;
for(j=i+1;j<n;j++)
{
if(a[j]<a[small])
{
small=j;
}
}
if(small!=i)
{
temp=a[i];
a[i]=a[small];
a[small]=temp;
}
}
printf("Sorted list \n");
time++;
time++;
for(i=0;i<n;i++)
{
printf("%d",a[i]);
time++;
}
printf("\n space complexity=%d",(n*4)+(5*4));
time++;
printf("\n time complexity=%d",(time+1));
}

