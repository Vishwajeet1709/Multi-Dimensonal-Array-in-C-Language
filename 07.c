//Program to print lower triangular matrix
#include<stdio.h>
int main()
{
    int a[5][5],i,j;
    printf("\n Complete matrix.\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            a[i][j]=rand()%10;
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n Lower triangular matrix.\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i>j || i==j)
                printf(" %d ",a[i][j]);
            else
                printf("   ");
        }
        printf("\n");
    }
}
