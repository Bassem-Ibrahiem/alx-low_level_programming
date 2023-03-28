#include "main.h"

/**
 * _strcpy - function that copies
 * @src: as the string pointed to by
 * , including the terminating null byte (\0)
 * @dest: to the buffer pointed to by dest.
 *
 * Return: as it is?
*/

char *_strcpy(char *dest, char *src)
{
	int l, i;

	l = 0;

	while (src[l] != '\0')
		l++;
	for (i = 0; i <= l; i++)
		dest[i] = src[i];
	return (dest);
}
