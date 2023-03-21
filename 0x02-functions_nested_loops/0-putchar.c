#include "main.h"

/**
 * main - The entry gate
 *
 * Return: Always 0.
*/

int main(void)
{
	char *a = "_putchar";
	while (*a)
	{
		_putchar(*a);
		a++
	}
	_putchar('\n');

	return (0);
}
