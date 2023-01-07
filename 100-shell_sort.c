#include "sort.h"

/**
 * shell_sort - sorts the array using the shell sort
 * @array: array of integers of size size
 * @size: size of the array
 */

void shell_sort(int *array, size_t size)
{
	size_t gap = 1;
	int temp;
	size_t i;
	size_t j;

	if (!array || size < 2)
		return;
	while (gap < size / 3)
		gap = (gap * 3) + 1;
	for (; gap > 0;)
	{
		for (i = gap; i < size; i++)
		{
			temp = array[i];
			for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
				array[j] = array[j - gap];
			array[j] = temp;
		}
		gap = (gap - 1) / 3;
		print_array(array, size);
	}
}

/**
 * insertion_sort - uses insertion sort to sort
 * @array: array of ints of size size
 * @size: size of the array
 */

void insertion_sort(int *array, size_t size)
{
	size_t i;
	size_t j;

	for (i = 0; i < size - 1; i++)
	{
		if (array[i + 1] < array[i])
		{
			for (j = i + 1; array[j] < array[j - 1]; j--)
			{
				if (j > 0)
				{
					swap_int(&array[j - 1], &array[j]);
					print_array(array, size);
				}
			}
		}
	}
}

/**
 * swap_int - swaps two ints
 * @a: int 1
 * @b: int b
 */

void swap_int(int *a, int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
}
