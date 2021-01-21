#include <stdio.h>
int main(void)
{
    int n,i,j,zeroes=0,ones=0;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Input 0s and 1s into array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if (arr[i]==1)
        {
            ones+=1;
        }
        else if (arr[i]==0)
        {
            zeroes+=1;
        }
    }
    int output[ones+zeroes];
    for(i=0;i<zeroes;i++)
    {
        output[i]=0;
    }
    for(i=zeroes;i<zeroes+ones;i++)
    {
        output[i]=1;
    }
    printf("Output array= [ ");
    for(i=0;i<zeroes+ones;i++)
    {
        printf("%d, ",output[i]);
    }
    printf("]\n");
}

