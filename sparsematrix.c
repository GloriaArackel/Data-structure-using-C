#include<stdio.h>
void main()
{
int r,c,i,j,count=0,count1=0,b[20][20];
printf("Enter the no.of rows and columns");
scanf("%d%d",&r,&c);
int a[r][c];
printf("Enter the elements of the matrix");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(a[i][j]==0)
count++;
else
count1++;
}
}
if(count>count1)
{
printf("It is a sparse matrix\n");
printf("row\tcolumn\tvalue\n");
b[0][0]=r;
b[0][1]=c;
b[0][2]=count1;
printf("%d\t%d\t%d\n",b[0][0],b[0][1],b[0][2]);
int k=1;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(a[i][j]!=0)
{
b[k][0]=1;
b[k][1]=j;
b[k][2]=a[i][j];
printf("%d\t%d\t%d\n",b[k][0],b[k][1],b[k][2]);
k++;
}
}
}
}
else
{
printf("It is not a sparse matrix");
}
}




