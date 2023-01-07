#ifndef SORTING_ALGOS
#define SORTING_ALGOS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <unistd.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
}	listint_t;

void lo_version(int *array, int lo, int high, size_t size);
int partition(int *array, int lo, int high, size_t size);
void swap_int(int *a, int *b);
void quick_sort(int *array, size_t size);
void swap_nodes(listint_t **h, listint_t **swap1, listint_t *swao2);
void selection_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void bubble_sort(int *array, size_t size);
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

#endif
