#include <unistd.h>
#include "main.h"

/**
 *print_alphabet_x10 - Print a - z ten times
 *Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int j;
	char k; 
	
	for (j = 0; j < 10; j++)
	{
	for (k = 'a'; k <= 'z'; k++)
	{
	_putchar(k);
	}
	_putchar('\n');
	}
}
