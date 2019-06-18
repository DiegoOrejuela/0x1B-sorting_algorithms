#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order using the
 * Bubble sort algorithm.
 *
 * @array: list of elements int.
 * @size: size of array.
 *
 * Return: nothing.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *temp_pre, *temp_save;
	for (temp = *list; (*temp).next != NULL; temp = (*temp).next)
	{
		if ((*(*temp).next).n < (*temp).n)
		{
			for (temp_prev = (*temp).next; (*temp_prev).prev != NULL; temp_prev = (*temp_prev).prev)
			{
				temp_save = (*tem_prev).prev; //Nodo anterior al menor

				(*(*temp_save).prev).next = temp_prev;
				(*temp_prev).prev = (*temp_save).prev;

				(*(*temp_prev).next).prev = temp_save;
				(*temp_save).next = (*temp_prev).next;

				(*temp_prev).next = temp_save;
				(*temp_save).prev = temp_prev;

				if ((*(*temp_prev).prev).n < (*temp_prev).n)
					break;
			}
		}
	}
}
