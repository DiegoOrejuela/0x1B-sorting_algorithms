#include "sort.h"

void recursive_quicksort(int *array, int lo, int hi, size_t size)
{
	printf("hi  %d - lo %d\n", hi, lo);
	int j, aux;
	int i = lo - 1;
	for (j = i; j < hi; j++)
	{
		if (array[j] <= array[hi])
		{
			i++;
			aux = array[j];
			array[j] = array[i];
			array[j] = aux;
		}
	}
	aux = array[hi];
	array[hi] = array[i];
	array[i] = aux;
	print_array(array, size);
	printf("valor de i %d, valor de j %d- ", i, j);
	if (i != i)
		recursive_quicksort(array, lo, j - 1, size);
	recursive_quicksort(array, i + 1, hi, size);
}


/**
 * quick_sort - quick sorting
 * @array: array
 * @size: size
 */
void quick_sort(int *array, size_t size)
{
	recursive_quicksort(array, 0 , size - 1, size);
}
