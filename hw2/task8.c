#include <stdio.h>

int main(void)
{
float a,b,c;
char op;
scanf("%f %c %f",&a,&op,&b);

switch(op)
{
case'+': c=a+b; break;
case'-': c=a-b; break;
case'*': c=a*b; break;
case'/': c=a/b; break;
}
printf("%.1f\n",c);
}
