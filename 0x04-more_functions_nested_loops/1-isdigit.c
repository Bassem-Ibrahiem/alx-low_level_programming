#include "main.h"

/**
 * _isdigit - check that if
 * @c: is digit.
 *
 * Return: as it is?
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
