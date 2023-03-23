#include "main.h"

/**
* print_numbers - to print numbers.
 *
 * Return: void.
*/

void print_numbers(void)
{
	char a;

	for (a = 0; a <= 9; a++)
		_putchar(a + '0');

	_putchar('\n');
}
