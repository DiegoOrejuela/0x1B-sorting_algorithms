#include "sort.h"

/**
 * selection_sort - sorting by selection
 * @array: array
 * @size: size
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j, pivote;
	int aux;

	if (array && size > 1)
	{
		while (i < size - 1)
		{
			pivote = i;
			j = i + 1;
			while (j < size)
			{
				if (array[pivote] > array[j])
				{
					pivote = j;
				}
				j++;
			}
			if (i != pivote)
			{
				aux = array[i];
				array[i] = array[pivote];
				array[pivote] = aux;
				print_array(array, size);
			}
			i++;
		}
	}
}
