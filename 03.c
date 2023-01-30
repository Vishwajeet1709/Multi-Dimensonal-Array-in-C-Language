//Write a program to print transpose of a matrix
#include<stdio.h>
int main()
{
    int i,j,arr[3][3];
//    Taking values from user
    printf("Enter the elements for array : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n Element Arr[%d,%d] : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nArray before transpose :\n");
    for(i=0;i<3;i++)
    {
        printf("\t");
        for(j=0;j<3;j++)
        {
            printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }
//    Finding transpose of matrix arr[][]
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j || i>j)
                continue;
            else
            {
                arr[i][j]=arr[i][j]+arr[j][i];
                arr[j][i]=arr[i][j]-arr[j][i];
                arr[i][j]=arr[i][j]-arr[j][i];
            }
        }
    }
    printf("\n\nTranspose of given array : \n");
    for(i=0;i<3;i++)
    {
        printf("\t");
        for(j=0;j<3;j++)
        {
            printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    return 0;
}
