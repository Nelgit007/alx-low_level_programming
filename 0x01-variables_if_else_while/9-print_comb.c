#include <stdio.h>

/**
 * main - Print all possible combinations of single digit numbers
 *
 * Return: Always return 0 (Success)
 *
 */

int main(void)
{
	int number;

	for (number = o; number <= 9; number++)
	{
	putchar(number + '0');
	if (number < 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
