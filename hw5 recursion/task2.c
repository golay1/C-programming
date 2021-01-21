#include <stdio.h>

int f(int n)
{
    if (n>0)
        return n%10+f(n/10);
    else
        return 0;
}

int main(void)
{
    int n;
    printf("Enter a number to find sum of digits: ");
    scanf("%d",&n);
    printf("The sum of digits of %d = %d\n",n,f(n));
}
