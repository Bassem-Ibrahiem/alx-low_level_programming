#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints lowercase alphabet in reverse order.
 *
 * Return: Always 0.
*/

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
