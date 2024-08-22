#include<stdio.h>
struct poly
{
int coef;
int exp;
};
void main()
{
struct poly x[15];
int term,i;
printf("Enter the no.of terms");
scanf("%d",&term);
printf("Enter the coefficient term and exponential \n");
for(i=0;i<term;i++)
{
printf("Coefficient");
scanf("%d",&x[i].coef);
printf("Exponential");
scanf("%d",&x[i].exp);
}
printf("The polynomial is:\n");
for(i=0;i<term;i++)
{
printf("(%dx^%d)",x[i].coef,x[i].exp);
if(i<term-1)
{
printf("+");
}
}
printf("\n");
}

