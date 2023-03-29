#include "main.h"

/**
 * reverse_array - function that reverses
 * @a: as the content of an array of integers.
 * @n: as the number of elements of the array
 *
 * Return: as it is?
*/

void reverse_array(int *a, int n)
{
	int i, x;

	for (i = 0; i <= n / 2; i++)
	{
		x = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = x;
	}
}
