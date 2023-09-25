#include <stdio.h>
#include "sort.h"
/**
 * swap_insert - This function permit to swap to integer
 *
 * @a: The first integer
 * @b: The adress of the second integer
 * Return: Nothing
*/
void swap_insert(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
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
		if (current->n > tmp->n)
		{
			swap_insert((int *)&(current->n), (int *)&(tmp->n));
			print_list(*list);
			while (current->prev)
			{
				if (current->n < current->prev->n)
				{
					swap_insert((int *)&(current->n), (int *)&(current->prev->n));
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
