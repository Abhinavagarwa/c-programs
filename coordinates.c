#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the x and y coordinates \n");
    scanf("%d%d",&x,&y);
    if(x>0&&y>0)
    printf("1st quad");
    else if(x<0&&y>0)
    printf("2nd quad");
    else if(x<0&&y<0)
    printf("3rd quad");
    else
    printf("4th quad");
    return 0;
}
