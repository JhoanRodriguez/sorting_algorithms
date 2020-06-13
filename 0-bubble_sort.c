#include "sort.h"
/**
 * swap_int - Function to swap to int
 * @a: The number to be swapped
 * @b: The number to be swapped
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
/**
 * bubble_sort - Order a list with `Bubble` method.
 * @array: It's the array to sort.
 * @size: It's the size of @array.
 *
 * Return: void.
 */

void bubble_sort(int *array, size_t size)
{
	size_t x = 0;
	size_t sorted = 1;
	size_t tmp = 0;
	size_t newsize = size;

	if (array == NULL)
		return;

	while (sorted != 0)
	{
		tmp = sorted;
		for (x = 0 ; x < newsize - 1; x++)
		{
			if (array[x] > array[x + 1])
			{
				swap_int(&array[x], &array[x + 1]);
				sorted += 1;
				print_array(array, size);
			}
			if (x == (newsize - 2))
				newsize -= 1;
		}
		if (tmp == sorted)
			sorted = 0;
	}
}
