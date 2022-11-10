#include "sort.h"

/**
  * selection_sort - Sorts an array of integers in ascending
  * order using Selection sort algorithm.
  * @array: The array of integers to be sorted.
  * @size: The size of the array of integers
  *
  * Return: Nothing.
  */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 1, aux = 0, min = 0, limit = size - 1;

	if (size < 2)
		return;

	while (i < limit)
	{
		if (j == size)
		{
			if (i != min)
			{
				aux = array[i];
				array[i] = array[min];
				array[min] = aux;
				print_array(array, size);
			}

			++i;
			min = i;
			j = i + 1;
			continue;
		}

		if (array[min] > array[j])
			min = j;

		++j;
	}
}