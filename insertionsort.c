#include<stdio.h>
void main()
{
int i=0,j,n,temp,a[100],time=0;
time++;
printf("Enter the no.of elements");
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
 for(i=0;i<n;i++)
 {
 temp=a[i];
 j=i-1;
 time++;
 while(j>=0&&a[j]>temp)
 {
 a[j+1]=a[j];
 j--;
 }
 a[j+1]=temp;
 }
 printf("Sorted list \n");
 time++;
 time++;
 for(i=0;i<n;i++)
 {
 printf("%d\n",a[i]);
 time++;
 }
 printf("\n space complexity=%d",(n*4)+(5*4));
 time++;
 printf("\n time complexity=%d",(time+1));
 }
 
