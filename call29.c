#include<stdio.h>
    void swap1(int num1,int num2)
    {
        int temp=num1;
        num1=num2;
        num2=temp; 
    }
    void swap2(int *a,int *b)
    {
        int temp=*a;
        *a=*b;
        *b=temp;
    }
    int main()
    {
        int num1=5;
        int num2=10;
        printf("\nbefore swapping %d,%d",num1,num2);
        swap1(num1,num2);
        printf("\nafter swapping by call by value %d,%d",num1,num2);
        swap2(&num1,&num2);
        printf("\nafter swapping by call by reference %d,%d",num1,num2);
    }