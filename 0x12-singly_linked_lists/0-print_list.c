#include "lists.h"

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
		return (0);
	for (len = 0; s[l] != '\0'; l++)
		;
	return (l);
}

/**
 * print_list - prints a linked lists
 * @h: pointer to first node
 *
 * Return: size of the list
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
