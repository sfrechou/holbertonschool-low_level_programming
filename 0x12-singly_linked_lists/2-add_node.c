#include "lists.h"

/**
 * add_node - function that prints number of elements in list
 * @head: pointer to list to print
 * @str: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	char *string = strdup(str);
	int i = 0;

	while (string[i] != '\0')
        {
                i++;
        }
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = string;
	newnode->len = i;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
