#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 *
 * Return: as it is?
*/

char *leet(char *)
{
	int l, i;

	for (l = 0; str[l] != '\0'; l++)
		;
	if (l % 2 == 0)
		i = l / 2;
	else
		i = (l + 1) / 2;
	for (; i < l; i++)
		_putchar(str[i]);

	_putchar('\n');
}
