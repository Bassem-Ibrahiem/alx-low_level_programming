#include "main.h"

/**
 * _isalpha - check that if
 * @c: is lower case
 *
 * Return: as it is?
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);

	return (0);
}
