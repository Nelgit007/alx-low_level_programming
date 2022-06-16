#include "main.h"

/**
 * swap_int - swap the values of two integer
 * @a: parameter
 * @b: parameter
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
