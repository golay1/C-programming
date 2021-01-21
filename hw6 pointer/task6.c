#include <stdio.h>

int printer(int *start, int *end)
{
    int i=0;
    printf("The elements you entered are:\n");
    while(start<=end)
    {
        printf("Element [%d]: %d\n",i,*start);
        i++;
        start++;
    }
    return 1;
}

int main(void)
{
    int L;
    printf("Input the number of elements to store in the array: ");
    scanf("%d",&L);
    int arr[L],i;
    printf("Input %d number of elements in the array: ",L);
    for(i=0;i<L;i++)
        scanf("%d",&arr[i]);
    printer(arr,arr+L-1);
}

