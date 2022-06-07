#include <stdio.h>

/**
 * main - Print possible combination of two different digit numbers
 *
 * Return: Always return 0 (Success)
 *
 */

int main(void)
{
	int tens;
	int ones;

	for (tens = 0; tens <= 9; tens++)
	{
	for (ones = tens +1; ones <= tens; ones++)
	{
	putchar(tens + '0');
	putchar(ones + '0');
	if (tens < 8)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
