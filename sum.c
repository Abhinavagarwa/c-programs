#include <stdio.h>
int main()
{
    printf("Abhinav Agarwal");
    printf("\n");
    float a,b,c,d,e,f;
    printf("enter two numbers \n");
    scanf("%f",&a);
    printf("\n");
    scanf("%f",&b);
    c=a+b;
    d=a*b;
    e=a/b;
    f=a-b;
    printf("Sum of two numbers= %f\n",c);
    printf("Subtraction of two numbers= %f\n",f);
    printf("Multiplication of two numbers= %f\n",d);
    printf("division of two numbers= %f\n",e);
    return 0;
}