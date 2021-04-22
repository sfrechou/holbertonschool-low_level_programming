#include "search_algos.h"

/**
 * jump_list -  interpolation search algorithm
 * @list: pointer to the head of the list to search in
 * @size: is the number of elements in array
 * @value: the value to search for
 *
 *
 * Return: first index of value found or -1
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump_step = sqrt(size);
	listint_t *prev, *aux;

	if (list == NULL)
		return (NULL);

	aux = list;
	while (aux->next != NULL && aux->n < value)
	{
		prev = aux;
		while (aux->next != NULL && aux->index < jump_step)
			aux = aux->next;
		jump_step += sqrt(size);
		printf("Value checked at index [%li] = [%i]\n", aux->index, aux->n);
	}
	printf("Value found between indexes [%li] and [%li]\n", prev->index,
	aux->index);
	aux = prev;
	/*printf("Value found between indexes [%li] and [%li]\n", prev, jump_step);*/
	while (aux->n < value)
	{
		printf("Value checked at index [%li] = [%i]\n", aux->index, aux->n);
		if (aux->next != NULL)
			aux = aux->next;
		else
			return (NULL);
	}
	if (aux->n == value)
	{
		printf("Value checked at index [%li] = [%i]\n", aux->index, aux->n);
		return (aux);
	}
	return (NULL);
}
