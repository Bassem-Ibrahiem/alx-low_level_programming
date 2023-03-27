#include "main.h"

/**
 * print_rev - function that prints
 * @s: as  a string, in reverse, followed by a new line.
 *
 * Return: as it is?
*/

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (i = i+1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
