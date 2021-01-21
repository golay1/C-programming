#include <stdio.h>

int main(void)
{
int a,b,c;
printf("Input first side: ");
scanf("%d",&a);
printf("Input second side: ");
scanf("%d",&b);
printf("Input third side: ");
scanf("%d",&c);

if(a==b && b==c)
    {printf("Triangle is equilateral triangle\n");}
else if (a==b || a==c || b==c)
    {printf("Triangle is isosceles triangle\n");}
else
    {printf("Triangle is scalene triangle\n");}
}
