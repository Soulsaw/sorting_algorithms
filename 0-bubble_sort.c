#include <stdio.h>
#include "sort.h"
/**
 * swap_bundle - This function permit to swap to integer
 *
 * @a: The first integer
 * @b: The adress of the second integer
 * Return: Nothing
*/
void swap_bundle(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * bubble_sort - This function sorts an array of integers in ascending order
 * using the buddle sort algorithm
 *
 * @array: Is the array of integers
 * @size: Is the size of the array
 *
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, size_a = size;

	while (size_a > 0)
	{
		for (i = 0; i < size_a - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_bundle(&array[i], &array[i + 1]);
				print_array(array, size);
			}
		}
		size_a--;
	}
}
