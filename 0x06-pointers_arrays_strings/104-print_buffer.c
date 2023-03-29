#include "main.h"

/**
 * print_buffer - a function that prints a buffer.
 * @b: as a character start with
 * @size: as the buffer size
 *
 * Return: as it is?
*/

void print_buffer(char *b, int size)
{
	int l, i;

	l = 0;

	while (src[l] != '\0')
		l++;
	for (i = 0; i <= l; i++)
		dest[i] = src[i];
	return (dest);
}
