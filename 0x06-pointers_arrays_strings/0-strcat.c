#include "main.h"
#include <stdio.h>

/**
 * _strcat - a function that concatenates two strings
 * @src : as appending string
 * @dest : as result string
 *
 * Return: as it is?
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
    {
		dest[i] = src[j];
		i++;
    }

		dest[i] = '\0';
	return (dest);
}
