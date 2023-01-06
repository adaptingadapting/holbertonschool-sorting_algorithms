#include "sort.h"

/**
 * selection_sort - sorts with the selection sort
 * @array: array to sort
 * @size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	int current_smaller;
	int array_pos;
	int changed = 0;
	int aux;
	size_t i;
	size_t j;

	if (!array)
		return;
	for (j = 0; j < size - 1; j++)
	{
		current_smaller = array[j];
		for (i = j; i < size; i++)
		{
			if (array[j] > array[i] && array[i] < current_smaller)
			{
				current_smaller = array[i];
				array_pos = i;
				changed = 1;
			}
		}
		if (changed)
		{
			aux = array[j];
			array[j] = array[array_pos];
			array[array_pos] = aux;
			changed = 0;
			print_array(array, size);
		}
	}
}
