#include "main.h"
#include <string.h>

/**
 * _strlen - function that returns the length of a string
 * @s: as string
 *
 * Return: as it is?
*/

int _strlen(char *s)
{
	int l;

	for(l = 0; s[l] != '\0'; l++);

	return (l);
}
