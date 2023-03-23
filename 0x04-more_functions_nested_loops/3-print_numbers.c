#include "main.h"

/**
 * print_line - to print line
 * @n: number of times.
*/

void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
