#include <stdio.h>
int main(void)
{
    int n,i,sum=0,fib[50]={0,1};
    printf("Enter the number of terms: "); /*C can only store integers up to about 2billion*/
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    printf("First %d terms of Fibonacci numbers are: ",n);
    for(i=0;i<n;i++)
    {
        printf("%d ",fib[i]);
        sum=sum+fib[i];
    }
    printf("\nThe sum of the sequence is: %d\n",sum);
}


