//Program to add to matrices of order 3x3
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
//    Taking input for matrix A
    printf("Enter values for matrix A : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\tElement A[%d,%d] : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");

//    Taking input for matrix A

    printf("Enter values for matrix A : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\tElement B[%d,%d] : ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");

//    Adding matrix A and B, and storing values in matrix C
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }

//    Printing Matrix After Adding

    printf("Matrix After Adding A and B : \n");
    for(i=0;i<3;i++)
    {
        printf("\t");
        for(j=0;j<3;j++)
        {
            printf(" %d ",c[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
