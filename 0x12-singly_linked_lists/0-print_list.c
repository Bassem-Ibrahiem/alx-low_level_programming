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

	for (l = 0; s[l] != '\0'; l++)
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
	for (size_t a = 0; h; a++)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
	}
	return (i);
}
