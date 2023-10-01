#include<stdio.h>
int sum(int n)
{
    if(n<=1)
    return n;
    return n+sum(n-1);
}
int main()
{
    int n;
    printf("enter the last digit\n");
    scanf("%d",&n);
    int s=sum(n);
    printf("%d",s);
}