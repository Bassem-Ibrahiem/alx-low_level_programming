#include "main.h"

/**
 * rev_string - function that reverses
 * @s: as a string.
 *
 * Return: as it is?
*/

void rev_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (i = i - 1; i >= 0; i--)
		s[i];

}
