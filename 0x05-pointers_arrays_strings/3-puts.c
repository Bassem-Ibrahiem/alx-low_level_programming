#include "main.h"

/**
 * _puts - function that prints
 * @str: as  a string, followed by a new line
 *
 * Return: as it is?
*/

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
