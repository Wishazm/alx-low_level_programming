#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 * starting with 1 and 2, separated by commas.
 * Return: 0
 */

int main(void)
{
	unsigned long int a = 1, b = 2, temp;
	int count = 0;

	while (count < 98)
	{
	if (count < 97)
	printf("%lu, ", a);
	else 
	printf("%lu\n", a);
	temp = b;
	b = a + b;
	a = temp;
	count++;
	}
	return (0);
}
