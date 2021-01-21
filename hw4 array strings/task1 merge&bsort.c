#include <stdio.h>

void merge(int A[],int B[])
{
    int i;
    for(i=15;i<20;i++)
    {
        A[i]=B[i-15];
    }
}

void bsort(int Aa[])
{
    int i,j,high;
    for (i=0;i<19;i++)
    {
        for(j=0;j<19-i;j++)
        {
            if(Aa[j]>Aa[j+1])
            {
                high=Aa[j];
                Aa[j]=Aa[j+1];
                Aa[j+1]=high;
            }
        }
    }
}

int main(void)
{
    int ArrayA[20],ArrayB[5],i;
    puts("Input 15 integers into ArrayA:");
    for(i=0;i<15;i++)
    {
        scanf("%d",&ArrayA[i]);
    }
    puts("Input 5 integers into ArrayB:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&ArrayB[i]);
    }
    merge(ArrayA,ArrayB);
    bsort(ArrayA);
    puts("Output is: ");
    for(i=0;i<20;i++)
    {
        printf("%d,",ArrayA[i]);
    }
    printf("\n");
}


