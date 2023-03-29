#include "main.h"

/**
 * cap_string - function that capitalizes
 * all words of a string.
 *
 * Return: as it is?
*/

char *cap_string(char *)
{
	int l, i;

	for (l = 0; str[l] != '\0'; l++)
		;
	for (i = 0; i < l; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
