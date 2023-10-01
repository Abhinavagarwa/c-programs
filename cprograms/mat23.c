#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("enter rows and column\n");
    scanf("%d %d",&r,&c);
    int a[r][c];
    int b[r][c];
    int d[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&b[i][j]);
    }

    printf("add\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            d[i][j]=a[i][j]+b[i][j];
            printf("%d,",d[i][j]);
        }
        printf("\n");
    }
    printf("sub\n");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            d[i][j]=a[i][j]-b[i][j];
            printf("%d,",d[i][j]);
        }
        printf("\n");
    }
    printf("Transpose\n");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d,",a[j][i]);
            printf("\n");
    }
    printf("upper tri\n");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++){
            if(i>j)
            printf("%d,",d[j][i]);
        }
            printf("\n");
    }
    printf("lower triangular\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++){
            if(i<j)
            printf("%d,",d[j][i]);
        }
            printf("\n");
    }
}
