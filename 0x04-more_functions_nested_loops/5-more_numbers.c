#include "main.h"

/**
* print_numbers - to print numbers.
 *
 * Return: void.
*/

void print_numbers(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
    {
        for (b = 0; b <= 14; b++)
			{
			    if (b < 10)
                {
                    putchar(b + '0');
                }
                else
                {
                    putchar((b / 10) + '0');
                    putchar((b % 10) + '0');
                }


			}
		putchar('\n');
    }

	return 0;
}
