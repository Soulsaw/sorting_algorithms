#include <stdio.h>
#include "sort.h"
/**
 * swap_select - This function permit to swap to integer
 *
 * @a: The first integer
 * @b: The adress of the second integer
 * Return: Nothing
*/
void swap_select(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * selection_sort - This function sort the array by the selection algorithm
 *
 * @array: The array of integer
 * @size: The size of the array
 * Return: Nothing
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, index;

	for (i = 0; i < size - 1; i++)
	{
		index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[index] > array[j])
			{
				index = j;
			}
		}
		if (index != i)
		{
			swap_select(&array[index], &array[i]);
			print_array(array, size);
		}
	}
}
