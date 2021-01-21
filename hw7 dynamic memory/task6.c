#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float *A, temp;
    int L, i=0, j=0;
    printf("Enter total number of elements: ");
    scanf("%d",&L);
    A=(float*)calloc(L,sizeof(float));
    for(i=0;i<L;i++)
    {
        printf("Enter Number %d: ",i+1);
        scanf("%f",&A[i]);
    }
    for(i=0;i<L-1;i++)
    {
        for(j=0;j<L-i-1;j++)
        if(A[j]>A[j+1])
        {
            temp=A[j+1];
            A[j+1]=A[j];
            A[j]=temp;
        }
    }
    printf("\nAscending Order:\n");
    for(i=0;i<L;i++)
        printf("%.2f\n",A[i]);
    printf("\nDescending Order:\n");
    for(i=L-1;i>=0;i--)
        printf("%.2f\n",A[i]);
    free(A);
}
