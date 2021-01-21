#include <stdio.h>

void average(int*a,int*b,int*c)
{
    float avg=(float)(*a+*b+*c)/3;
    printf("The average of the three numbers is: %.2f\n",avg);
}

int main(void)
{
int a,b,c;
printf("enter 3 integer numbers: ");
scanf("%d%d%d",&a,&b,&c);
average(&a,&b,&c);
}
