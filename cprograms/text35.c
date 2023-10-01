#include<stdlib.h>
#include<stdio.h>
int main()
{
    int num;
    FILE *fptr;
    //see before copying msg by abhinav ""gan hit main jari""
        fptr=fopen("college\\program.txt","w");
    if(fptr==NULL){
        printf("Error!");
        exit(1);
    }
    printf("enter num:");
    scanf("%d",&num);
    fprintf(fptr,"%d",num);
    fclose(fptr);
    fclose(fptr);
}