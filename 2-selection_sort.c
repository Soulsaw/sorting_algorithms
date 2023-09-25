#include <stdio.h>
#include "sort.h"
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
			swap(&array[index], &array[i]);
			print_array(array, size);
		}
	}
}
