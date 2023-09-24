#include <stdio.h>
#include "sort.h"
/**
 * insertion_sort_list - This function permit to sort a doubly linked list
 *
 * @list: Is the pointer to the first node of the linked list
 * Return: Nothing
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *head = *list, *tmp, *current;

	if (!head)
		return;
	while (head->next)
	{
		current = head;
		tmp = head->next;
		if (current-> n > tmp->n)
		{
			swap((int *)&(current->n), (int *)&(tmp->n));
			print_list(*list);
			while (current->prev)
			{
				if (current->n < current->prev->n)
				{
					swap((int *)&(current->n), (int *)&(current->prev->n));
					print_list(*list);
				}
				else
				{
					break;
				}
				current = current->prev;
			}
			
		}
		head = head->next;
	}
	
}
void insertion_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		if (array[i] > array[i + 1])
		{
			swap(&array[i], &array[i + 1]);
			print_array(array, size);
			for (j = i; j > 0; j--)
			{
				if (array[j] < array[j - 1])
				{
					swap(&array[j], &array[j - 1]);
					print_array(array, size);
				}
				else
				{
					break;
				}
			}
			
		}
	}
}
