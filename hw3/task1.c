#include <stdio.h>

int main(void)
{
    int x,array[10],flag=0,i,j;
    printf("Enter 10 integers into array:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter x: ");
    scanf("%d",&x);
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(array[i]*array[i]+array[j]*array[j]==x*x)
            {
                printf("(%d,%d)",i,j);
                flag=1;
            }
        }
    }
    if(flag==0)
    {
        printf("There are no such pairs.");
    }
    printf("\n");
}
