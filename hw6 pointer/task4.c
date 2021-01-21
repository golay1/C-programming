#include <stdio.h>

int max(int *start, int *end)
{
    int max=0;
    while(start<=end)
    {
        if(*start>max)
            max=*start;
        start++;
    }
    printf("%d\n",max);
    return 1;
}

int main(void)
{
    int arr[15],i;
    printf("Input 15 positive integers into array: ");
    for(i=0;i<15;i++)
        scanf("%d",&arr[i]);
    max(arr,arr+14);
}
