#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 timmes
 *
 * Return: Always 0.
*/

void print_alphabet_x10(void);
{
	int i;

	for (i = 0; i < 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	}
	putchar('\n');
}
