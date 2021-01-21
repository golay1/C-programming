#include <stdio.h>
#include <stdlib.h>

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
    char *A;
    int i=0;
    A=(char*)calloc(50,sizeof(char));
    printf("Input:\n");
    fgets(A,(51),stdin);
    printf("Output: ");
    reverse(A);
    printf("\n");
}
