#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints lowercase alphabet.
 *
 * Return: Always 0.
*/

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
