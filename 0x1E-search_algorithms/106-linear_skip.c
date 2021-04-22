#include "search_algos.h"

/**
 * linear_skip -  interpolation search algorithm
 * @list: pointer to the head of the list to search in
 * @value: the value to search for
 *
 *
 * Return: first index of value found or -1
*/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *x = list;
	size_t i;

	if (list == NULL)
		return (NULL);

	while (x->next != NULL && x->n < value)
	{
		for (i = x->n; i >= 1; i--)
		{
			while (x->express != NULL)
				x = x->express;
		}
		if (x->express->n == value)
		{
			return (x->express);
		}
		else
		{
			return (NULL);
		}
	}
	return (NULL);
}
