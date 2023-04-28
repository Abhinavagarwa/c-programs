#include<stdio.h>
int main()
{
    int i,n,b,c,area=0;
    printf("press\n 1.triangle \n 2.square \n 3.rectangle \n 4.circle \n");
    scanf("%d",&n);
    switch (n)
    {
    case 1 :
        printf("enter base and height \n");
        scanf("%d%d",&b,&c);
        area=0.5*b*c;
        break;
    case 3 :
        printf("enter length and breadth \n");
        scanf("%d%d",&b,&c);
        area=b*c;
        break;
    case 2 :
        printf("enter the side of square \n");
        scanf("%d",&b);
        area=b*b;
        break;
    case 4 :
        printf("Enter the radius \n");
        scanf("%d",&b);
        area=3.14*b*b;
        break;            
    
    default: 
        printf("entered wrong choice");

        break;
    }
    printf("area=%d",area);
    return 0;
}