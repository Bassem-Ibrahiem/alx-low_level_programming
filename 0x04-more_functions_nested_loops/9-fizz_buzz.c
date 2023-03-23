#include <stdio.h>
#include "main.h"

/**
 * main - Prints the numbers from 1-100, and replace all
 * multiples of three with "Fizz", and "Buzz" for multiples of five
 * and both for multiples of (three and five).
 *
 * Return: Always 0.
 */

int main(void)
{
	int a;

	for (a = 1;a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
			printf("FizzBuzz");
		else if (a % 3 == 0)
			printf("Fizz");
		else if (a % 5 == 0)
			printf("Buzz");
		else
			printf("%d",a);
		if (a != 100)
			printf(" ");
	}
	printf('\n');

	return(0);
}
