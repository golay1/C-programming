#include <stdio.h>

int main(void)
{
int num1,num2,num3,max;
printf("Input num1: ");
scanf("%d",&num1);
printf("Input num2: ");
scanf("%d",&num2);
printf("Input num3: ");
scanf("%d",&num3);

if (num1>num2)
    {max=num1;}
else
    {max=num2;}
if (num3>max)
    {max=num3;}
printf("Maximum is: %d\n",max);
}
