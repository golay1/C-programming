#include <stdio.h>

int power(int *a, int *b, int *c)
{
    int val=*a,i;
    for(i=1;i<*b;i++)
        val*=*a;
    if(val==*c)
    {
        printf("true\n");
        return 1;
    }
    else
    {
        printf("false\n");
        return 0;
    }
}

int main(void)
{
    int a,b,c;
    printf("Input 3 integers: ");
    scanf("%d %d %d",&a,&b,&c);
    power(&a,&b,&c);
}
