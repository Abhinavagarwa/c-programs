#include<stdio.h>
int main()
{
    int i,n,a,d,sum=0,p=0;
    printf("enter the no of terms,initial term and common difference \n");
    scanf("%d%d%d",&n,&a,&d);
    sum=a;
    for(i=1;i<n;i++)
    {
        p=d/(a+i);
        sum=sum+p;
    }
    printf("sum=%d",sum);
    return 0;
}