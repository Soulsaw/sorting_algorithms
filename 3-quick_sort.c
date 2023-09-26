#include <stdio.h>
#include "sort.h"

/**
 * swap_quick - This function permit to swap to integer
 *
 * @a: The first integer
 * @b: The adress of the second integer
 * Return: Nothing
*/
void swap_quick(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * partition_array - This method return the right index of the pivot
 *
 * @array: Is the array
 * @index: Is the first index
 * @last: Is the last of the array
 * @size: The array size
 * Return: The right index
*/
int partition_array(int *array, int index, int last, size_t size)
{
	int pivot, i, j;

	pivot = array[last - 1];

	i = index - 1;

	for (j = index; j < last - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (array[j] == array[i])
				continue;
			swap_quick(&array[j], &array[i]);
			print_array(array, size);
		}
	}
	i++;
	swap_quick(&array[i], &array[last - 1]);
	print_array(array, size);

	return (i);
}
/**
 * quick_sort_make - This function sort an array of integer using quick sort
 *
 * @array: Is the array of integer
 * @start: The star of the array
 * @end: THe end index of the array
 * @size: Is the size of the array
*/
void quick_sort_make(int *array, int start, int end, size_t size)
{
	int index;

	if (start >= end || start < 0)
		return;

	index = partition_array(array, start, end, size);
	quick_sort_make(array, start, index - 1, size);
	quick_sort_make(array, index + 1, end, size);
}
/**
 * quick_sort - This function sort an array of integer using quick sort
 *
 * @array: Is the array of integer
 * @size: Is the size of the array
*/
void quick_sort(int *array, size_t size)
{
	quick_sort_make(array, 0, size, size);
}

