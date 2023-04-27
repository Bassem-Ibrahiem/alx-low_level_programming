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
	size_t a = 0
	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str.h), h->str ? h->str : "(nil)");
		h = h->next;
		a++;
	}
	return (a);
}
