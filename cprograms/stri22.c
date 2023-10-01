#include <stdio.h>
#include <string.h>
int main()
{
    int l;
    char c[20],d[30],e[30];
    printf("enter the string\n");
    gets(c);
    l=strlen(c);
    printf("%d length of string \n",l);
    printf("enter the string\n");
    gets(d);
    printf("%s is the concated string \n",strcat(c,d));
    printf("%s is the copied string \n",strcpy(e,c));
    for(int i=0;c[i]!='\0';++i)
        d[l-i-1]=c[i];
    d[l]='\0';
    printf("%s is the reverse string",d);
    return 0;
}

