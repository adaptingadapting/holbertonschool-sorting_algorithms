#include "sort.h"

/**
 * selection_sort - sorts with the selection sort
 * @array: array to sort
 * @size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	int current_smaller = 0;
	int array_pos;
	int aux;
	size_t i;
	size_t j;

	for (j = 0; j < size - 1; j++)
	{
		current_smaller = array[j];
		for (i = j; i < size; i++)
		{
			if (array[i] < current_smaller)
			{
				current_smaller = array[i];
				array_pos = i;
			}
		}
		if (array[j] > array[array_pos])
		{
			aux = array[j];
			array[j] = array[array_pos];
			array[array_pos] = aux;
			print_array(array, size);
		}
	}
}
