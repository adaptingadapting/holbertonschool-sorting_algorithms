#include "sort.h"

/**
 * quick_sort - uses the quick sort to sort
 * @array: array to sort
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	lo_version(array, 0, size - 1, size);
}

/**
 * lo_version - i feel like a had to to a version
 * with the lo parameter so it would work recursively
 * i tried as hard as i could to avoid this but
 * i dont see any other way really, too bad, i know there
 * probably is one...
 * @array: array to be sorted
 * @lo: lowest in the array you want to go, after the
 * last partition this is going to be placed.
 * @high: highest in the array you want to go, its going
 * to be the last item in this case, so size
 * @size: size of the array for printintg
 */

void lo_version(int *array, int lo, int high, size_t size)
{
	int pivot;

	if (lo < high)
	{
		pivot = partition(array, lo, high, size);
		lo_version(array, lo, pivot - 1, size);
		lo_version(array, pivot + 1, high, size);
	}
}

/**
 * partition - does most of the work of the function
 * partition orders an array based on a "pivot", and puts
 * numbers that are smaller than it to the left or behind in
 * the array and numbers that are bigger to the right, this
 * if applied recursively orders an array in n log n time
 * @array: array to sort
 * @lo: lowest you want to go in the array
 * @hi: highest index in the array (size)
 * @size: size of the array, printintg prupose
 * Return: returns the new position of the pivot
 */

int partition(int *array, int lo, int hi, size_t size)
{
	int i = (lo - 1);
	int j;
	int pivot = array[hi];

	for (j = lo; j < hi; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap_int(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (array[hi] < array[i + 1])
	{
		swap_int(&array[i + 1], &array[hi]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * swap_int - swap int for pointers and strings
 * @a: int a
 * @b: int b
 */

void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}
