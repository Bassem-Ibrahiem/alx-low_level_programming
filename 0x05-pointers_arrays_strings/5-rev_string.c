#include "main.h"

/**
 * rev_string - function that reverses
 * @s: as a string.
 *
 * Return: as it is?
*/

void rev_string(char *s)
{
	char p = s[0];
	int l, i;

	for (l = 0; s[l] != '\0'; l++)
		;
	for (i = 0; i < l; i++)
	{
		l--;
		p = s[i];
		s[i] = s[l];
		s[l] = p;
	}
}
