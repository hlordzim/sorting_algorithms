#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using
 *               the Bubble sort algorithm.
 * @array: Pointer to the array to be sorted.
 * @size: Size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	int i, j, temp;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				printf("Swapped: %d, %d\n", array[j], array[j + 1]);
			}
		}
	}
}
