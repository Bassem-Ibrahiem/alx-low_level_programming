#include "main.h"

/**
 * print_last_digit - prints the x digit of
 *@a: as an integer
 *
 * Return: as it is?
*/

int print_last_digit(int a)
{
	int x;
	
	x = a % 10;

	if (x < 0)
	{
		x = x * -1;
	}

	_putchar(x + '0');

	return (x);
}
