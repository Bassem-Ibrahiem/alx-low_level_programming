#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
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

/**
 * main - adds two positive number
 * @argc: number of arguments
 * @argv: array of arguents
 *
 * Return: 0 (Success), or 1 (Success)
 */
int main(int argc, char *argv[])
{
	int sum, num, i, j, k;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		num = _atoi(argv[k]);
		if (num >= 0)
		{
			sum += num;
		}
	}

	printf("%d\n", sum);
	return (0);
}
