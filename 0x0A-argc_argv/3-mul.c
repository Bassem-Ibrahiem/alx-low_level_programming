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
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
