#include <stdio.h>

void bsort(int,int[]);
float mean(int,int[]);
float med(int,int[]);
int mode(int,int[]);

int main(void)
{
    int a,b,i,modeA,modeB;
    float meanA,meanB,medA,medB;
    printf("How many elements in arrayA (hrs playing video games)?: ");
    scanf("%d",&a);
    int arA[a];
    printf("Input integers into arrayA (hrs playing video games each day:\n");
    for(i=0;i<a;i++)
    {
        scanf("%d",&arA[i]);
    }
    printf("How many elements in arrayB (hrs studying)?: ");
    scanf("%d",&b);
    int arB[b];
    printf("Input integers into arrayB (hrs studying each day:\n");
    for(i=0;i<b;i++)
    {
        scanf("%d",&arB[i]);
    }
    meanA=mean(a,arA);
    medA=med(a,arA);
    modeA=mode(a,arA);
    meanB=mean(b,arB);
    medB=med(b,arB);
    modeB=mode(b,arB);
    printf("\nMean of A is: %.1f, Median of A is: %.1f, Mode of A is: %d\nMean of B is: %.1f, Median of B is: %.1f, Mode of B is: %d\n\n",meanA,medA,modeA,meanB,medB,modeB);
    if(meanA>meanB&&medA>medB&&modeA>modeB)
    {
        puts("You're playing more video games; you have to spend more time studying.");
    }
    else if(meanA<meanB&&medA<medB&&modeA<modeB)
    {
        puts("Great, you're spending considerable time in studying.");
    }
    else if(meanA==meanB&&medA==medB&&modeA==modeB)
    {
        puts("You're well balanced.");
    }
    else
    {
        puts("Sorry, can't come to an outcome");
    }
}

float mean(int m,int arM[])
{
    int i;
    float sum=0,s;
    for(i=0;i<m;i++)
    {
        sum+=arM[i];
    }
    s=sum/m;
    return s;
}

float med(int n,int arN[])
{
    int high,i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++);
        {
            if(arN[j]>arN[j+1])
            {
                high=arN[j];
                arN[j]=arN[j+1];
                arN[j+1]=high;
            }
        }
    }
    if(n%2==0)
    {
        return(((arN[n/2-1]+arN[n/2])/2.0));
    }
    else
    {
        return arN[n/2];
    }
}

int mode(int q,int arQ[])
{
    int mValue=0,mCount=0,i,j;
    for(i=0; i<q; ++i)
    {
        int count=0;
        for(j=0; j<q; ++j)
        {
            if(arQ[i]==arQ[j])
            {++count;}
        }
        if (count>mCount)
        {mCount = count;
        mValue = arQ[i];}
    }
return mValue;
}
