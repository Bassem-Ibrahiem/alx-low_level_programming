#include "main.h"

/**
 * File: 5-more_numbers.c
 * more_numbers - Prints the numbers 0-14 ten times.
 */
void more_bbers(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
				_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
}
