#include "main.h"

/**
 * rev_string - function that changes
 * all lowercase letters of
 * @s: as a string to uppercase.
 *
 * Return: as it is?
*/

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}
