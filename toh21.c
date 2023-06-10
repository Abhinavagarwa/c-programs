#include<stdio.h>
void toh(int n,char frod,char trod,char arod)
{
    if(n==1)
    {
        printf("\n move disk 1 from rod %c to rod %c",frod,trod);
        return;
    }
    toh(n-1,trod,arod,trod);
    printf("\n move disk %d from rod %c to rod %c",n,frod,trod);
    toh(n-1,arod,trod,frod);
}
int main()
{
    int n=4;
    
    toh(n,'A','B','C');
}