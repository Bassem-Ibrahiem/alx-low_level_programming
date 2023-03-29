#include "main.h"

/**
 * rev_string - function that changes
 * all lowercase letters of a string to uppercase.
 *
 * Return: as it is?
*/

char *string_toupper(char *)
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
