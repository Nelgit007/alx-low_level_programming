#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0 (Success)
 *
 */

int main(void)
{
	int i;
	int n;
	int k;

	for (i = 48; i < 58; i++)
	{
	for (n = 48; n < 58; n++)
	{
	if (n > i)
	{
	for (k = 48; k < 58; k++)
	{
	if (k > n)
	{
	putchar(i);
	putchar(n);
	putchar(k);
	if (i == 55 && n == 56 && k == 57)
	{
	break;
	}

	putchar(',');
	putchar(' ')
	}
	}
	}
	}
	}

	putchar('\n');
	return (0);
}
