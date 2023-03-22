#include "stdio.h"

/**
 * main - prints the first 50 Fibonacci numbers starting with 1 and 2
 *
 * Return: int.
 */

int main(void)
{
	long a = 0;
	long b = 1;
	int n = 0;
	long f;

	while (n < 50)
	{
		f = b + a;
		if (n != 49)
			printf("%ld, ", f);
		else
			printf("%ld\n", f);
		a = b;
		b = f;
		n += 1;
	}
	return (0);
}
