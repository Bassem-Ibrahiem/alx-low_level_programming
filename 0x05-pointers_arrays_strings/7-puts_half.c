#include "main.h"

/**
 * puts_half - function that prints half of
 * @str: as a string, followed by a new line.
 *
 * Return: as it is?
*/

void puts_half(char *str)
{
	int l, i;

	for (l = 0; str[l] != '\0'; l++)
		;
	if (l % 2 == 0)
		i = l / 2;
	else
		i = (l - 1) / 2;
	for (; i < l; i ++)
		_putchar(str[i]);

	_putchar('\n');
}
