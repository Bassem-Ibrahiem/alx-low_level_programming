#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @src: as source string
 * @dest: as destination string
 * @n: as an integer for most bytes in source
 *
 * Return: as it is?
*/

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; src[b] != '\0' && b < n; b++)
	{
		dest[a] = src[b];
		a++;
	}

	dest[a] = '\0';

	return (dest);
}
