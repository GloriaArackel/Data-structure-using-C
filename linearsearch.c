#include<stdio.h>
void main()
{
             int n,i,x,A[50],count=0,t=2,s;
             t++;
             t++;
             printf("Enter the number of elements in the array");
             t++;
             scanf("%d",&n);
             t++;
             printf("Enter the element to be searched:");
             t++;
             scanf("%d",&x);
             t++;
             printf("Enter the array elements:");
             t++;
             t++;
             for(i=0;i<n;i++)
             {
                       t++;
                      scanf("%d",&A[i]);
                      t++;
              }
              for(i=0;i<n;i++,t++)
              {
                      if(A[i]==x)
                      {
                            t++;                      	
                            count++;
                            t++;
                            printf("\nElement %d found at postion %d\n",x,i+1);
                            t++;
                }
                }  
                 t++;   
              if(count>0)
              {
                       printf("\nElement %d is found %d times\n",x,count);
                       t++;
               }
               else
                 {
                       printf("Element not found");
                       t++;
                       }

             printf("Space complexity: %d\n" , 20+4*n);
             t++;
             t++;
             printf("Time complexity: %d" ,t);
             }
