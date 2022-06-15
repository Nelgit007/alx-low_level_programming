#include "main.h"
#include <stdio.h>

/**
 * Natural numbers - print all numbers from 0 to 98
 *
 * @n: Number to be printed
 * Return: Always 0.
 */

void print_to_98(int n)
{
	while (n < 98)
	{
	printf("%d \n", n);
	n++;
	}
	while (n > 98)
	{
	printf("%d \n", n);
	n--;
	}
	printf("98");
	printf('\n');
}
