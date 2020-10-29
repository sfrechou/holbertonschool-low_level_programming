#include "lists.h"

/**
 * free_list - function that prints number of elements in list
 * @head: pointer to list to print
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	head = head->next;
	free(temp);
}
