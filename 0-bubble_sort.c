#include "sort.h"

/**
 * bubble_sort - This is the function that bubble sorts the array
 * @array: The array to sort
 * @size: The size of the array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
    size_t i = 0, j, rem_end = 0;
    int temp;
    bool swap;

    if (size < 2)
        return;

    for (j = 0; j < size - 1; j++)
    {
        i = 0;
        while (i < size - 1 - rem_end)
        {
            swap = false;
            if (array[i] > array[i + 1])
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;

                swap = true;
            }
            if (swap == true)
                print_array(array, size);
            i++;
        }
                rem_end++;
    }
    if (swap == false)
        return;
}
