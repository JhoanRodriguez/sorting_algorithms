#include "sort.h"
/**
 * insertion_sort_list - function to sort doubly linked list in ascending order
 * @list: doubly linked list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = NULL;

	if (list == NULL || *list == NULL)
		return;

	tmp = (*list)->next;

	for (; tmp != NULL; tmp = tmp->next)
	{
		while (tmp->prev != NULL &&
				tmp->n < tmp->prev->n)
		{
			tmp->prev->next = tmp->next;

			if (tmp->next != NULL)
				tmp->next->prev = tmp->prev;
			tmp->next = tmp->prev;
			tmp->prev = tmp->prev->prev;
			tmp->next->prev = tmp;

			if (tmp->prev == NULL)
				*list = tmp;
			else
				tmp->prev->next = tmp;
			print_list(*list);
		}
	}
}
