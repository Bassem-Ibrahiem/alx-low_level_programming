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
	for (i = i; i >= 0; i--)
		putchar(s[i]);

    putchar('\n')
}
