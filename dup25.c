#include<stdio.h>
int main()
{
    int n,j,i,l=0;
    printf("enter the length");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            l++;
        }
    }
    printf("duplicate elements are %d",l); 
    return 0;   
}