#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y, v, f;

	v = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		f = 0;
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				v++;
				f = 1;
			}
		}
		if (f == 0)
		{
			return (v);
		}
	}

	return (0);
}
