#include <stdio.h>
int i;
int prime(int n1)
{
    if (i==1)
       return 1;
    else if(i==0 || n1%i==0)
       return 0;
    else
    {
        i=i-1;
        prime(n1);
    }
}

int main(void)
{
   int n1;
   printf("Enter a positive integer: ");
   scanf("%d",&n1);
   i=n1/2;
   if(prime(n1)==1)
    printf("%d is a prime number.\n",n1);
   else
    printf("%d is NOT a prime number.\n",n1);
}

