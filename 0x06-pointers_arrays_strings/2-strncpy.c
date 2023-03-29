#include "main.h"
#include <string.h>

/**
* _strncpy - a function that copies a string.
 * @src: as source string
 * @dest: as destination string
 * @n: as an integer for most bytes in source
 *
 * Return: as it is?
*/

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; src[x] != '\0' && x < n; x++)
		dest[x] = src[x];

	for (x = x; x < n; x++)
		dest[x] = '\0';

	return (dest);
}
