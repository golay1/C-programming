#include <stdio.h>

int f(int *a)
{
    if (*a>='a' && *a<='z')
        printf("The character is lowercase\n");
    else if (*a>='A' && *a<='Z')
        printf("The character is Uppercase\n");
    else
        printf("%c Neither lowercase nor uppercase\n",*a);
    return 1;
}

int main(void)
{
    int a;
    printf("Input character: ");
    scanf(" %c",&a);
    f(&a);
}
