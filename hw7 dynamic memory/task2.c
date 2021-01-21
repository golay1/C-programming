#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *i=(int*)malloc(sizeof(int));
    char *c=(char*)malloc(sizeof(char));
    float *f=(float*)malloc(sizeof(float));
    printf("Enter an Integer value: ");
    scanf("%d",&*i);
    printf("Enter a character value: ");
    scanf(" %c",&*c);
    printf("Enter a float value: ");
    scanf("%f",&*f);
    printf("\nInputted values are: %d, %c, %.2f.\n",*i,*c,*f);
    free(i);
    free(c);
    free(f);
}
