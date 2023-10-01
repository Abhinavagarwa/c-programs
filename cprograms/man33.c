#include<stdio.h>
#include <string.h>
struct manager{
    int empid;
    int age;
    char name[30];
};
struct employee{
    int empid;
    int age;
    char name[30];
};
struct team
{
    struct manager m1;
    struct employee e1;
    struct employee e2;
};
int main(){
    struct team t1;
    int empid[3],age[3];
    char name[30][3];
    for(int i=0;i<2;i++)
    {
        printf("enter id\n");
        scanf("%d",&empid[i]);
        printf("enter age\n");
        scanf("%d",&age[i]);
        printf("enter name\n");
        scanf("%s",&name[i]); 
    }

    t1.m1.empid = empid[0];
    t1.m1.age = age[0];
    strcpy(t1.m1.name , name[0]);
    
    t1.e1.empid = empid[1];
    t1.e1.age = age[1];
    strcpy(t1.e1.name , name[1]);

    t1.e2.empid = empid[2];
    t1.e2.age = age[2];
    strcpy(t1.e2.name , name[2]);
     for(int i=0;i<2;i++)
    {
        printf("%d\n",empid[i]);
        printf("%d\n",age[i]);
    }
}