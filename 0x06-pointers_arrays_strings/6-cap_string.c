#include "main.h"

/**
 * cap_string - a function that capitalizes
 * @s: as a string, for the first letters words of .
 *
 * Return: as it is?
*/

char *cap_string(char *s)
{
	int i, j;
	char seps[13] = {' ', '\t', '\n', ',', ';', '.', '!',
					'?', '"', '(', ')', '{', '}'}

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		for (j = 0; j < 13; j++)
		{
			if (s[i] == seps[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= 32;
			}
		}
	}
	return (s);
}
