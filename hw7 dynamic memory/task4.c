#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *A;
    int L, i=0, sum=0;
    printf("Enter the number of elements: ");
    scanf("%d",&L);
    A=(int*)calloc(L,sizeof(int));
    for(i=0;i<L;i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&A[i]);
        sum+=A[i];
    }
    printf("\nArray elements are: ");
    for(i=0;i<L;i++)
        printf("%d ",A[i]);
    printf("\nSum of all the elements: %d\n",sum);
}
