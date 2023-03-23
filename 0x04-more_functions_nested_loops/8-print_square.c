#include "main.h"

/**
 * print_square - Prints square.
 * @size: The value of the times table to be printed.
 * @a: Number of columns.
 * @b: Number of rows.
 */
void print_square(int size)
{
	int a, b;

    if (size > 0)
	{
		for (b = 0; b <= size; b++)
		{
			for (a = 0; a <= size; a++)
				_putchar('#');

			_putchar('\n');
		}
	}
	_putchar('\n');
}
