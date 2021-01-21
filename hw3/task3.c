#include <stdio.h>
int main(void)
{
    int r,c,i,j;
    printf("Enter number of rows: ");
    scanf("%d",&r);
    printf("Enter number of columns: ");
    scanf("%d",&c);
    int mat1[r][c],mat2[r][c],matad[r][c],matsub[r][c];
    printf("Enter values for matrix 1:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter values for matrix 2:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("Sum of 2 matrices is:\n");
    for(i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            matad[i][j]=mat1[i][j]+mat2[i][j];
            matsub[i][j]=mat1[i][j]-mat2[i][j];
            printf("%d ",matad[i][j]);
        }
    printf("\n");
    }
    printf("Difference of 2 matrices is:\n");
    for(i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("%d ",matsub[i][j]);
        }
    printf("\n");
    }
}
