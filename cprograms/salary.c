#include<stdio.h>
int main()
{
    int bs,sl,hra,da;
    printf("enter the basic salary \n");
    scanf("%d",&bs);
    if(bs<=10000)
    {
        hra=0.2*bs;
        da=0.8*bs;
    }
    else if(bs<=20000)
    {
        hra=0.25*bs;
        da=0.9*bs;
    }
    else if(bs>20000)
    {
        hra=0.3*bs;
        da=0.95*bs;
    }
    sl=bs+hra+da;
    printf("the total salary=  %d",sl);
}