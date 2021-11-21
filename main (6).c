#include<stdio.h>
int main(void)
{
   int i,j,k,n;
   printf("n=");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     for(j=1;j<=n+1-i;j++)
        printf(" ");
     for(k=1;k<=2*i-1;k++)
        printf("*");
     printf("\n");
   }
   for(i=1;i<=n-1;i++)
   {
      for(j=1;j<=i+1;j++)
         printf(" ");
      for(k=1;k<=2*(n-i)-1;k++)
         printf("*");
      printf("\n");
   }
   return 0;
}
