#include "lists.h"

/**
 * find_listint_loop - find the loop in a linked list
 * @head: data type listint_t double pointer of head
 * Return: the loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first = head;
	listint_t *second = head;

	if (head == NULL)
		return  (NULL);
	if (head == head->next)
		return (head);
	while (first)
	{
		first = first->next;
		second = head;
		while (first && second != first)
		{
			if (second == first->next)
			{
				return (second);
			}
			second = second->next;
		}
	}
	return (first);
}
