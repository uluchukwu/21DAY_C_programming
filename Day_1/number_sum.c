#include <stdio.h>
/**
 * main - a program calculates the sum of two numbers
 * Return:0
 */
int main(void)
{
	int a;
	int b;
	int sum;

	printf("Enter the first number\n");
	scanf("%d",  &a);

	printf("Enter the secound number\n");
	scanf("%d",  &b);

	sum = a + b;
	printf("the sum of %d + %d = %d \n",  a, b, sum);

	return (0);
}

