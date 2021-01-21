#include <stdio.h>
int main(void)
{
    int arr[10],i,j,high;
    printf("Input 10 integers:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<9;i++)
    {
        for(j=0;j<9-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                high=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=high;
            }
        }
    }
    printf("Sorted List: ");
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
