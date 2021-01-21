#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int a,b;
printf("Input number: ");
scanf("%d",&a);
b=a%2;
if(b==0)
    {printf("%d is even number\n",a);}
else
    printf("%d is odd number\n",a);
}
