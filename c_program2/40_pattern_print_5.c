#include<stdio.h>
 void main()
{
 int i,j,n,k;


 printf("Enter the row size/number:");
 scanf("%d",&n);
 
 
 for(i=1;i<=n;i++)
 {

   for(j=n;j>i;j--)
   {
     printf(" ");
   }
   
   for(k=1;k<=2*i-1;k++)
   {
     printf("*");
   }
   printf("\n");
 }
}