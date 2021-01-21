#include <stdio.h>

int myFunc(int n)
{
    if (n==1)
        return 1;
    else
        return (myFunc(n-1)*myFunc(n-1)+1);
}

int main(void)
{
    int n,i;
    printf("Input n: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
        printf("%d ",myFunc(i));
}
