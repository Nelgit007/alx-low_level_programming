#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - Print a - z ten times
 * Return: Always 0.
 */

void print_alphabetx10(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		_putchar(10 * c);
		c++;
	}
	_putchar('\n');
}
