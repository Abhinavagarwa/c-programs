#include<stdio.h>
int main(){
    int a,min=0,max=0,j=0,k=0;
    printf("enter the number\n");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++)
    {
        if(arr[i]>arr[j])
        j=i;
        if(arr[k]>arr[i])
        k=i;
    }
    printf("max=%d\n",arr[j]);
    printf("min=%d",arr[k]);
}
