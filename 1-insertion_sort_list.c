#include "sort.h"
/**
 * insertion_sort_list - sorting with insertion sort algorithm
 *
 * @list: list of elements int.
 *
 * Return: nothing.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *temp_prev, *temp_save;

	for (temp = *list; (*temp).next != NULL; temp = (*temp).next)
	{
		if ((*(*temp).next).n < (*temp).n)
		{
			temp_prev = (*temp).next;
			for (temp = (*temp).prev; (*temp_prev).prev != NULL; )
			{
				temp_save = (*temp_prev).prev;

				if ((*temp_save).prev)
					(*(*temp_save).prev).next = temp_prev;
				(*temp_prev).prev = (*temp_save).prev;

				if ((*temp_prev).next)
					(*(*temp_prev).next).prev = temp_save;
				(*temp_save).next = (*temp_prev).next;

				(*temp_prev).next = temp_save;
				(*temp_save).prev = temp_prev;

				if ((*temp_prev).prev == NULL)
					*list = temp_prev;

				print_list(*list);

				if ((*temp_prev).prev == NULL)
					break;

				if ((*(*temp_prev).prev).n < (*temp_prev).n)
					break;
			}
		}
	}
}
