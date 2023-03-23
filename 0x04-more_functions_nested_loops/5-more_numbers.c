#include "main.h"

/**
   * more_numbers - a function that prints 10 times the numbers, from 0 to 14,
   * followed by a new line.
   * Return: Always 0
 */
void more_numbers(void)
{
	int a, n;

	for (n = 0; n < 10; n++)
	{
		for (a = 0; a <= 14; a++)
		{
			af (a > 9)
				_putchar(a / 10 + '0');

			_putchar(a % 10 + '0');
		}
		_putchar('\n');
	}
}
