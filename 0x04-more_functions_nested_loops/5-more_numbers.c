#include "main.h"

/**
* more_numbers - to print numbers between 0 and 14
 *for then times.
 *
 * Return: void.
*/

void more_numbers(void)
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
}
