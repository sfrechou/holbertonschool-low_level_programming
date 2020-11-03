#include "lists.h"

/**
 * reverse_listint - function that prints number of elements in list
 * @head: pointer to list to print
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *current = (*head);
	listint_t *following = NULL;

	while (current != NULL)
	{
		following = current->next;
		current->next = previous;
		previous = current;
		current = following;
	}
	(*head) = previous;
	return (current);
}
