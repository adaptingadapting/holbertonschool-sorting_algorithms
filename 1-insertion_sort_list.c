#include "sort.h"

/**
 * insertion_sort_list - instertion sort
 * @list: pointer to the head of the ll
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *iter, *insert, *aux;

	if (!list || !*list || !(*list)->next)
		return;
	for (iter = (*list)->next; iter != NULL; iter = aux)
	{
		aux = iter->next;
		insert = iter->prev;
		while (insert != NULL && iter->n < insert->n)
		{
			swap_nodes(list, &insert, iter);
			print_list((const listint_t *)*list);
		}
	}
}

/**
 * swap_nodes - swaps two nodes
 * @h: pointer to the original list
 * @swap1: pointer to the first swap
 * @swap2: pointer to the secon swap
 * Return: void
 */

void swap_nodes(listint_t **h, listint_t **swap1, listint_t *swap2)
{
	(*swap1)->next = swap2->next;
	if (swap2->next)
		swap2->next->prev = (*swap1);
	swap2->prev = (*swap1)->prev;
	swap2->next = (*swap1);
	if ((*swap1)->prev)
		(*swap1)->prev->next = swap2;
	else
		*h = swap2;
	(*swap1)->prev = swap2;
	(*swap1) = swap2->prev;
}
