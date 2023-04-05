#include "main.h"

int pm(int n, int i);

/**
 * is_prime_number - a function that check if
 * @n: as a number is a prime number or not
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (pm(n, n - 1));
}

/**
 * pm - calculates if a number
 * @n: as a number is prime or not
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int pm(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (pm(n, i - 1));
}

