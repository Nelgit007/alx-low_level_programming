#include "main.h"

/**
 * _strlen - The length of a string
 * @s: parameter
 * Return: int
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
	count++;
	}

	return (count);
}
