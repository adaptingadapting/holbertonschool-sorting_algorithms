#include "sort.h"

/**
 * bubble_sort - bubble sort
 * @array: array to sort
 * @size: size of array becasue its an int array
 */

void bubble_sort(int *array, size_t size)
{
  size_t i, j;
	int aux;

	if (!array)
		exit(1);
	for (i  = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				aux = array[j];
				array[j] = array[j + 1];
				array[j + 1] = aux;
				print_array(array, size);
			}
		}
	}
}
