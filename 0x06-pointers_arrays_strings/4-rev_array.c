#include "main.h"

/**
 * reverse_array - revereses the content of an array of integers
 * @a: an array of integers
 * @n: number of elements of the array
 * REturn: returns void
 */

void reverse_array(int *a, int n)

{
	int *start_c, *end_c, c;
	int i;


	start_c = a;
	end_c = a;


	for (i = 0; i < n - 1 ; i++)
	{
	


	c = *end_c;
	*end_c = *start_c;

	start_c++;
	end_c--;
	}
}
