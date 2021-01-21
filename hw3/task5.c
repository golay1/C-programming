#include <stdio.h>
int main(void)
{
    int n,i,sum;
    printf("Enter number of elements in array (n): ");
    scanf("%d",&n);
    int arr[n-1];
    printf("Input (n-1):\n");
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    sum=n*(n+1)/2;
    for(i=0;i<n-1;i++)
    {
        sum=sum-arr[i];
    }
    printf("Missing number: %d\n",sum);
}
