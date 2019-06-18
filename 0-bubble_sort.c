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
void bubble_sort(int *array, size_t size)
{
	size_t size_temp, i, j;
	int temp;

	size_temp = size;

	for (j = 1; j != size_temp; )
	{
		for (i = 0; i < size_temp - 1; i++)
		{
			if (array[i + 1] < array[i])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
		size_temp--;
	}

}
