#include <stdio.h>
#include "main.h"

/**
 * print_array - function that prints
 * @n: as elements of
 * @a: as an array of integers, followed by a new line.
 * Return: as it is?
*/

void print_array(int *a, int n)
{
	int i;
	for (i = 0; i < n; i++)
		if (i == n - 1)
			printf("%d\n", a[n]);
		else
			printf("%d, ", a[n]);
}
