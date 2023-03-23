#include "main.h"

/**
 * print_line - to print line
 * @n: number of times.
 * Return: void.
*/

void print_line(int n)
{
	if (n > 0)
		while (n--)
			_putchar('_');

	_putchar('\n');
}
