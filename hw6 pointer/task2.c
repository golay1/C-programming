#include <stdio.h>

int main(void)
{
    int alpha[15],i;
    printf("The 12th component of alpha is: %d\n",alpha[11]);
    alpha[4]=22;
    alpha[8]=alpha[6]+alpha[13];
    alpha[2]=4*alpha[8]-33;
    for(i=0;i<15;i+=3)
        printf("%d %d %d\n",alpha[i],alpha[i+1],alpha[i+2]);
}
