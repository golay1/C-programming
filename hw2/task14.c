#include <stdio.h>

int main(void)
{
int a, i, b=0;
printf("Input positive integer: ");
scanf("%d",&a);
for(i=2;i<=a/2;i++)
{
    if(a%i==0)
    {
        b=1;
    }
}
if (b==0)
    printf("%d is a prime number\n",a);
else
    printf("%d is not a prime number\n",a);
}
