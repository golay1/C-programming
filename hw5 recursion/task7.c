#include <stdio.h>

void reverse(char *str)
{
   if (*str)
   {
       reverse(str+1);
       printf("%c", *str);
   }
}

int main(void)
{
    char a[50]={' '};
    printf("Input string: ");
    fgets(a,50,stdin);
    reverse(a);
    printf("\n");
}
