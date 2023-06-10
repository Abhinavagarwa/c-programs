#include<stdio.h>
void cub(int r){
    printf("%d",r*r*r);
}
int main()
{
    int d;
    printf("enter the number\n");
    scanf("%d",&d);
     cub(d);
}