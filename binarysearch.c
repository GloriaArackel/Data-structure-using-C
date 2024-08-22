#include<stdio.h>
void main()
{
int i,n,x,left,right,mid,t,flag=0,time=0;
time++;
printf("Enter no.of elements");
time++;
scanf("%d",&n);
time++;
int a[n];
for(i=0;i<n;i++)
{
printf("Enter the elements %d",i+1);
time++;
scanf("%d",&a[i]);
time++;
time++;
}
time++;
printf("Enter the number to be searched");
time++;
scanf("%d",&x);
time++;
left=0;
right=n-1;
time++;
while(left<=right)
{mid=(left+right)/2;
time++;
time++;
if(x==a[mid])
{
flag=1;
break;
}
else if(x>a[mid])
{
left=mid+1;
}
else if(x=a[mid])
{
right=mid-1;
}
}
time++;
if(flag==0)
{
printf("Element not found");
time++;
}
else
{
printf("Element found at position %d\n",mid+1);
time++;
}
printf("Space complexity is %d\n",(8*4)+(n*4));
time++;
printf("time complexity is %d\n",time+1);
}

