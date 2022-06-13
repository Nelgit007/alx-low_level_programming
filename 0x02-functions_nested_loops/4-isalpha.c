#include "main.h"

/**
 * _isalpha - Return one if c isletter, lower case or upper case
 *
 * @c: The int to print
 *
 * Return: Always return 0 (Success)
 */

int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
