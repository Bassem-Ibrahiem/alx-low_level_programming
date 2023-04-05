#include "main.h"

int nsq(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of
 * @n: as a number
 *
 * Return: the result of square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (nsq(n, 0));
}

/**
 * nsq - A loop to find the natural square root of
 * @n: as a number
 * @i: as a iterator
 *
 * Return: the result of square root
 */
int nsq(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (nsq(n, i + 1));
}
