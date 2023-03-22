#include "main.h"

/**
 * _islower - check that if
 * @c: is lower case
 *
 * Return: as it is?
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}
