#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character \n");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("vowel");
    }
    else
    {
        printf("consonant");
    }
}