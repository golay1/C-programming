#include <stdio.h>

int fibonacci(int n);
int main(void)
{
 	int input;
 	printf("Enter the nth number in Fibonacci series: ");
 	scanf("%d", &input);
    printf("The Fibonacci(%d) number is %d\n", input,fibonacci(input));
}
int fibonacci(int n)
{
 	if(n < 2)
 		return n;
 	else
 		return fibonacci(n-1)+fibonacci(n-2);
}
