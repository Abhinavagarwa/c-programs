#include<stdio.h>
int main()
{
    int amt,tot=0,t=0;
    printf("enter the amount  \n");
    scanf("%d",&amt);
    if(amt>=2000)
    {
        t+=amt/2000;
        amt=amt-t*2000;
        tot+=t;
        t=0;
    }
    if(amt>=500)
    {
        t+=amt/500;
        amt=amt-t*500;
        tot+=t;
        t=0;
    }
    if(amt>=200)
    {
        t+=amt/200;
        amt=amt-t*200;
        tot+=t;
        t=0;
    }
    if(amt>=100)
    {
        t+=amt/100;
        amt=amt-t*100;
        tot+=t;
        t=0;  
    }
    if(amt>=50)
    {
        t+=amt/50;
        amt=amt-t*50;
        tot+=t;
        t=0;
    }
    if(amt>=20)
    {
        t+=amt/20;
        amt=amt-t*20;
        tot+=t;
        t=0;
    }
    if(amt>=10)
    {
        t=t+amt/10;
        amt=amt-t*10;
        tot+=t;
        t=0;
    }
    if(amt>=5)
    {
        t+=amt/5;
        amt=amt-t*5;
        tot+=t;
        t=0;
    }
    if(amt>=2)
    {
        t+=amt/2;
        amt=amt-t*2;
        tot+=t;
        t=0;
    }
    if(amt>=1)
    {
        t+=amt/1;
        amt=amt-t*1;
        tot+=t;
        t=0;
    }
    printf("total numbers of notes is equal to  %d",tot);
    return 0;
}