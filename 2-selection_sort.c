/*
 * Authors:
 *      Solomon Nwante
 *      Loïc Kami
 */

#include "sort.h"
#include "swap.h"

/**
 * selection_sort - Sort integers in an array in an asscending order.
 * @array: A pointer to the array
 * @size: Size of the array
 *
 * Description: Works by repeatedly selecting the smallest
 *              element from the unsorted portion of the list
 *              and moving it to the sorted portion of the list.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
			if (min_idx != i)
				swap(&array[min_idx], &array[i]);
			print_array(array, size);
		}
	}
}
