//Write a program to find a row with maximum numbers of 1
#include<stdio.h>
int main()
{
    int i,j,Max1s,Max=0,Row,m,n;
    printf("Enter the order of matrix (m x n) : ");
    scanf("%d%d",&m,&n);
    int array[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\nEnter Element %d %d : ",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d ",array[i][j]);
            if(array[i][j] == 1)
                Max++;
        }
        printf("\n");
        if(Max1s < Max)
            {
                Max1s=Max;
                Max=0;
                Row=i+1;
            }
    }
    printf("\nIn this matrix, row no %d has %d 1s.\n\n",Row,Max1s);
    return 0;
}
