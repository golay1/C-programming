#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *A;
    int L, i=0;
    printf("Enter the length(limit) of the text: ");
    scanf("%d",&L);
    A=(char*)calloc(L+1,sizeof(char));
    printf("Enter your text: ");
    getchar();
    fgets(A,(L+1),stdin);
    printf("\nThe Text which you entered: ");
    printf("%s\n", A);
}
