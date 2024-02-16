/*
 * Authors:
 *      Solomon Nwante
 *      Loïc Kami
 */

#include "sort.h"

/**
 * swap - Swaps the values pointed to by the pointers
 * @a: Pointer to int values
 * @b: Pointer to int values
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = * b;
	*b = temp;
}

/**
 * bubble_sort - Sorts array integers in assending order.
 * @array: Pointer to the array.
 * @size: Size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, index;

	for(i = 0; i < size - 1; i++)
		for(index = 0; index < size - i - 1; index++)
			if(array[index] > array[index + 1])
			{
				swap(&array[index], &array[index + 1]);
				print(array, size);
			}
}
