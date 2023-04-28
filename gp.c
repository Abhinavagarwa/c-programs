#include<stdio.h>
int main()
{
   int i,a,n,r,p=0;
   double sum=0;
   printf("enter the last number,initial term and common ratio \n");
   scanf("%d%d%d",&n,&a,&r);
   p=a;
   sum=a;
   for(i=2;i<=n;i++){
    p=p*r;
    sum=sum+p;
   }
   printf("sum= %f",sum);
   return 0;
}