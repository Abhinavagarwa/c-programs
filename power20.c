#include<stdio.h>
int pow(int num,int exp)
{
    while(exp>0)
        return num*pow(num,exp-1);
}
int main()
{
    int num,exp;
    printf("Enter the number and exponential \n");
    scanf("%d%d",&num,&exp);
    printf("%d",pow(num,exp));
}