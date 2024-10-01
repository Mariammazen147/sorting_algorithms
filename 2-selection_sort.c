#include "sort.h"

/**
 * selection_sort - Sorts an array ascendinlgy using selection sort
 * @array: The array to sort
 * @size: The size of the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min, temp;

	if (array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		min = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (min > array[j])
			{
				temp = min;
				min = array[j];
				array[j] = temp;
			}
		}
		array[i] = min;
		print_array(array, size);

	}
}
