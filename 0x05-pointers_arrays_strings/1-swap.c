#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps the values of
 * @a: as first integer
 * @b: as second integer
 * @x: as assistant pointer between them
 *
 * Return: as it is?
*/

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
