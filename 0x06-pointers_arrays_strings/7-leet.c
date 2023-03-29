#include "main.h"

/**
 * leet - function that encodes
 * @s: as a string into 1337.
 *
 * Return: as it is?
*/

char *leet(char *s)
{
	int x, y;

	char *c = "AaEeOoLlTt";
	char *n = "4433001177";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (s[x] == c[y])
				s[x] = n[y];
		}
	}
	return (s);
}
