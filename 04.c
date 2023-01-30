//Write a program to find the sum of right diagonal of matrix
#include<stdio.h>
int main()
{
    int i,j,a[3][3],sum=0;
//    Taking values from user
    printf("Enter the elements for array : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n Element Arr[%d,%d] : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
//    Printing array before adding values
    printf("\n|Entered Matrix|\n");
    for(i=0;i<3;i++)
    {
        printf("\t");
        for(j=0;j<3;j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
//    Code to add values of upper triangle of diagonal
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j || i<j)
                sum=sum+a[i][j];
        }
    }
    printf("\nAddition of upper triangle of matrix is = %d. \n\n",sum);
    return 0;
}
