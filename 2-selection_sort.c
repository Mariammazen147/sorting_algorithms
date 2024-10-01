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
	int min, location;
	bool swap;

	if (array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		swap = false;
		min = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (min > array[j])
			{
				min = array[j];
				location = j;
				swap = true;
			}
		}
		if (swap == true)
		{
			array[location] = array[i];
			array[i] = min;
			print_array(array, size);
		}
	}
}
