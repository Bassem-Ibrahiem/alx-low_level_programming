#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int tall, r;

	if (size > 0)
	{
		for (t = 1; t <= size; t++)
		{
			for (r = size - t; r > 0; r--)
				_putchar(' ');

			for (r = 0; r < t; r++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
