#include "sort.h"

/**
 * insertion_sort_list - sorting with insertion sort algorithm
 * @list: head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *marker, *pivote;

	if (*list && (*list)->next)
	{
		marker = (*list)->next;
		while (marker)
		{
			pivote = marker->prev;
			if (pivote)
			{
				if (marker->n < pivote->n)
				{
					swap_node(list, pivote, marker);
					pivote = pivote->prev;
					if (marker->prev)
						marker = marker->prev;
					print_list(*list);
				}
				else
				{
					;
				}
			}
			if (marker)
				marker = marker->next;
		}

	}
}
/**
 *swap_node - swap nodes
 * @head: head
 * @node1: node1 to swap
 * @node2: node2 to swap
 */
void swap_node(listint_t **head, listint_t *node1, listint_t *node2)
{
	listint_t *temp;

	temp = node1->prev;
	if (temp)
		temp->next = node2;
	else
		*head = node2;
	node2->prev = temp;
	node1->prev = node2;
	node1->next = node2->next;
	if (node1->next)
		node1->next->prev = node1;
	node2->next = node1;
}
