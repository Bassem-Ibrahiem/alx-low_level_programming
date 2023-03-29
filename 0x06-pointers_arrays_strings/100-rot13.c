#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13
 *
 * Return: as it is?
*/

char *rot13(char *)
{
	int n, l, c, d, x, g;

	n = 0;
	l = 0;
	c = 0;
	d = 1;
	x = 0;
	g = 1;

	while (s[l] != '\0')
	{
		if (s[l] >= '0' && s[l] <= '9')
		{
			c++;
			if (!(s[l + 1] >= '0' && s[l + 1] <= '9'))
				break;
		}
		l++;
	}
	for (; c > 1; c--)
		d *= 10;
	for (; x <= l; x++)
	{
		if (s[x] == '-')
			g *= -1;
		else if (s[x] <= '9' && s[x] >= '0')
		{
			n += (s[x] - '0') * d * g;
			d /= 10;
		}
	}
	return (n);
}
