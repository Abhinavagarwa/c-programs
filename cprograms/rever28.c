#include <stdio.h>
#include <stdlib.h>
int main(){
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int temp;
    for(int i = 0; i<a/2; i++){
        temp = arr[i];
        arr[i] = arr[a-i-1];
        arr[a-i-1] = temp;
    }
 for(int i = 0; i < a; i++){
        printf("%d,", arr[i]);
    }
}