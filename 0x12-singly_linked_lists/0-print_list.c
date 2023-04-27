#include "list.h"

/**
 * _strlen - function that returns the length of a string
 * @s: as string
 *
 * Return: as it is?
*/

int _strlen(char *s)
{
	int l;

	if (!s)
		return (0)
	for (l = 0; s[l] != '\0'; l++)
		;
	return (l);
}

/**
 * print_list - Prints linked list
 * @h: pointer to first node
 *
 * Return: Size of elements
 */

size_t print_list(const list_t *h)
{
	for (size_t a = 0; h; a++)
	{
		printf("[%d] %s\n", _strlen(str.h), str.h ? str.h : "(nil)");
		h = next.h;
	}
	return (a);
}
