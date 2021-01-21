#include <stdio.h>

int main(void)
{
int a;
printf("Input character: ");
scanf("%c",&a);

if (a>='a' && a<='z')
    printf("'%c' is lowercase alphabet\n",a);
else if (a>='A' && a<='Z')
    printf("'%c' is uppercase alphabet\n",a);
}
