#include <unistd.h>

/**
 * _putchar - writes the character c to the stdout
 *
 * @c: The character to print
 *
 * Return: Always return 1 (Success)
 *
 * On error, return -1, and errno is set approprietly
 */

int _putchar(char c)
{
	return(write(1, $c, 1));
}
