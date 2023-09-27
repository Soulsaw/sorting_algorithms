#include<stdio.h>
#include "sort.h"
/**
 * swap_cocktail - This function permit to swap to integer
 *
 * @a: The first integer
 * @b: The adress of the second integer
 * Return: Nothing
*/
void swap_cocktail(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * cocktail_sort_list - This function permit to sort a doubly linked list
 *
 * @list: Is the pointer to the first node of the linked list
 * Return: Nothing
*/
void cocktail_sort_list(listint_t **list)
{
	listint_t *head, *tmp, *current, *idxstart = *list, *idxend;
	int b = 0;

	if (!head)
		return;
	do {
		head = idxstart;
		while (head->next)
		{
			current = head;
			tmp = head->next;
			if (current->n > tmp->n)
			{
				b = 1;
				swap_cocktail((int *)&(current->n), (int *)&(tmp->n));
				print_list(*list);
			}
			head = head->next;
		}
		if (b == 0)
			break;
		b = 0;
		idxend = head;
		while (idxend->prev)
		{
			current = idxend;
			tmp = idxend->prev;
			if (current->n < tmp->n)
			{
				b = 1;
				swap_cocktail((int *)&(current->n), (int *)&(tmp->n));
				print_list(*list);
			}
			idxend = idxend->prev;
		}
		idxstart = idxend;
	} while (b == 1);
}
