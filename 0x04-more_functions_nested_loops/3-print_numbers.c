#include "main.h"

/**
 * print_numbers - print numbers between 0 and 9.
 */

void print_numbers(void)
{
	char a;

	for (a = 0; a <= 9; a++)
		_putchar(a + '0');

	_putchar('\n');
}
