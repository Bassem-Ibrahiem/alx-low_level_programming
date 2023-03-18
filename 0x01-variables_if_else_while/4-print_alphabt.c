#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints lowercase alphabet except ("e" and "q").
 *
 * Return: Always 0.
*/

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		if (a != 'e' && a != 'q')
			putchar(a);
	putchar('\n');
	return (0);
}
