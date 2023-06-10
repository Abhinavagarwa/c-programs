#include<stdio.h>
int main()
{
    int n,a,c,b,i;
    printf("enter the last number\n");
    scanf("%d",&n);
    a=0;
    b=1;
    printf("%d\n%d",a,b);
    for(i=2;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("\n%d",c);
    }
    return 0;
}