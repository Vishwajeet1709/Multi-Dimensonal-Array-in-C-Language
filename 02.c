//Write a program to calculate the product of two matrices
#include<stdio.h>
int main()
{
    int i,j,a[3][3],b[3][3],product;

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

//    Printing product of matrix A and b
    printf("\nMatrix after multiplication (A x B) : \n");
    for(i=0;i<3;i++)
    {
        printf("\t");
        for(j=0;j<3;j++)
        {
            product=(a[i][0]*b[0][j])+(a[i][1]*b[1][j])+(a[i][2]*b[2][j]);
            printf(" %d ",product);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
