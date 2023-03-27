#include "main.h"

/**
 * puts2 - function that prints
 * every other character of
 * @str: as a string, starting with the first character
 * , followed by a new line.
 *
 * Return: as it is?
*/

void puts2(char *str)
{
	int l, i;

	for (l = 0; str[l] != '\0'; l++)
		;
	for (i = 0; i < l; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
