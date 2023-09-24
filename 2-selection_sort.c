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
	size_t i, index, index_found, b;
	int min;

	index = 0;
	while (index < size)
	{
		min = array[index];
		index_found = index;
		b = 0;
		for (i = index; i < size; i++)
		{
			if (min > array[i])
			{
				min = array[i];
				index_found = i;
				b = 1;
			}
		}
		if (b == 1)
		{
			swap(&array[index], &array[index_found]);
			print_array(array, size);
		}
		index++;
	}
}
