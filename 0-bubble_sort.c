#include "sort.h"

/**
 * bubble_sort - bubble sort
 * @array: array to sort
 * @size: size of array becasue its an int array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	int aux;

loop:
	for (i  = 0; i < size - 1; i++)
	{
		if (array[i] > array[i + 1])
		{
			aux = array[i];
			array[i] = array[i + 1];
			array[i + 1] = aux;
			print_array(array, size);
			goto loop;
		}
	}
}
