#include "main.h"

/**
 * print_sign - prints the sign of a number
 * c@: whether it is?
 *
 * Return: as it is?
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43)
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48)
		return (0);
	}
	else
	{
		_putchar(45)
		return (-1);
	}
}
