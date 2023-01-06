#include "sort.h"

/**
 * insertion_sort_list - instertion sort
 * @list: pointer to the head of the ll
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *aux = NULL;
	listint_t *aux2 = NULL;
	listint_t *node = NULL;

	if (!*list || !(*list)->next)
		exit(1);
	node = *list;
	for (node = (*list)->next; node; node = aux)
	{
		aux = node->next;
		aux2 = node->prev;
		for (; aux2 && node->n < aux2->n;)
		{
			swap_nodes(list, &aux2, node);
			print_list(*list);
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
