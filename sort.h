#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
	int i;

	i = 0;
	while (list)
	{
		if (i > 0)
			printf(", ");
		printf("%d", list->n);
		++i;
		list = list->next;
	}
	printf("\n");
}

void bubble_sort(int *array, size_t size)
void insertion_sort_list(listint_t **list)
void selection_sort(int *array, size_t size)
void quick_sort(int *array, size_t size)

#endif /* SORT_H */
