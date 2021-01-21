#include <stdio.h>
int main(void)
{
    char first_noun[15], second_noun[15], verb[15];
    printf("Enter the first noun: ");
    scanf("%s",first_noun);
    printf("Enter the second noun: ");
    scanf("%s",second_noun);
    printf("Enter a verb: ");
    scanf("%s",verb);
    printf("\nThe %s %s over the %s.\n",first_noun,verb,second_noun);
}
