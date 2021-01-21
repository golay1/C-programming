#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float *A, max=-999999;
    int L, i=0;
    printf("Enter total number of elements: ");
    scanf("%d",&L);
    A=(float*)calloc(L,sizeof(float));
    for(i=0;i<L;i++)
    {
        printf("Enter Number %d: ",i+1);
        scanf("%f",&A[i]);
        if(max<A[i])
            max=A[i];
    }
    printf("\nThe largest element is: %.2f\n",max);
}
