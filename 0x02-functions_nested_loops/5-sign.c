#include "main.h"

/**
 * print_signr - return zero letter not lower case, one letter not upper case
 * 
 * @n: number to check
 * Return: Always return 0 0r 1
 */

int print_sign(int n)
{
	int test;
	
	if (n > 0)
	{
	test = 1;
	_putchar('+');
	}
	else if (n == 0)
	{
	test = 0;
	_putchar('0');
	}
	else
	{
	test = -1;
	_putchar('-');
	}
	return (test);
}
