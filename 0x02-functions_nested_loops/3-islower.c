#include "main.h"

/**
 * _islower - short discription, single line
 * @c: contains value to be compared
 * Return: Always return 0.
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
