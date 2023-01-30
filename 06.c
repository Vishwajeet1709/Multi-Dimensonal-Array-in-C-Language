//Write a program to find the sum of rows and colums of a matrix in 2D array
#include<stdio.h>
int main()
{
    int i,j,arr[4][4],RowSum,ColumnSum;
//    initializing array with random values

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            arr[i][j]=rand()%100;
            printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<4;i++)
    {
        RowSum=0;
        ColumnSum=0;
        for(j=0;j<4;j++)
        {
            RowSum = RowSum + arr[i][j];
            ColumnSum = ColumnSum + arr[j][i];
        }
        printf("\nSum of row %d is %d, and sum of column %d is %d.\n",i+1,RowSum,i+1,ColumnSum);
    }
    return 0;
}
