//Accept a matrix from user and determine whether it is a sparse matrix or not
#include<stdio.h>
int main()
{
    int i,j,m,n;
    printf("\n Enter the order of matrix, first row then column(M x N) : ");
    scanf("%d%d",&m,&n);
    printf("\n Enter %d elements.\n",m*n);
    int array[n][m],CountZero=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\n Element %d %d : ",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    printf("\nMatrix that you entered : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d ",array[i][j]);
            if(array[i][j] == 0)
                CountZero += 1;
        }
        printf("\n");
    }
    if(CountZero > (m*n)/2)
        printf("\n Yes, this is a Sparse Matrix.\n\n");
    else
        printf("\n No, this is not a Sparse Matrix.\n\n");
    return 0;
}
