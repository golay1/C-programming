#include <stdio.h>

int main(void)
{
int a,b,c,d,e;
float avg;
printf("Input marks of five subjects:\n");
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

avg=(a+b+c+d+e)/5.0;
printf("Percentage = %.2f\n",avg);
if (a>=90)
    printf("Grade A\n");
else if (a>=80)
    printf("Grade B\n");
else if (a>=70)
    printf("Grade C\n");
else if (a>=60)
    printf("Grade D\n");
else if (a>=40)
    printf("Grade E\n");
else
    printf("Grade F\n");
}
