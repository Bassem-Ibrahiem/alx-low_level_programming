#include "main.h"

/**
* more_numbers - to print numbers between
 * @a: as cycle between 0 and 9.
 * @b: as series between 0 and 14
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
			    if (b > 9)
                    _putchar((b / 10) + '0');
                _putchar((b % 10) + '0');
            }
		_putchar('\n');
    }
}
