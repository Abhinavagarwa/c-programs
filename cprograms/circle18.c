#include<stdio.h>
void cirle(double r,int a)
{
    if(a==1)
    printf("%lf",2*3.14*r); 
    else if(a==2)
    printf("%lf",2*r);
    else if(a==3)
    printf("%lf",3.14*r*r);
    else
    printf("wrong choice");
}
int main()
{
    int a;
    double r;
    printf("enter the number \n1.circumference \n2.diameter \n3.area\n");
    scanf("%d",&a);
    printf("enter the radius\n");
    scanf("%lf",&r);
    cirle(r,a);
    return 0;
}