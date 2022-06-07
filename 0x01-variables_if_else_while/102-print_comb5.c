#include <stdio.h>

/**
 * main - Program that prints all possible combination of two two-digit number
 *
 * Return: Always return 0 (Success)
 *
 */

int main(void)
{
	int i;
	int n;

	for (i = 0; i < 100; i++)
	{
	for (n = 0; n < 100; n++)
	{
	if (n > i)
	{
	putchar(i / 10 + '0');
	putchar(i % 10 + '0');
	putchar(' ');
	putchar(n / 10 + '0');
	putchar(n % 10 + '0');

	if (i * 100 + n != 9899)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}

	putchar('\n');
	return (0);
}
