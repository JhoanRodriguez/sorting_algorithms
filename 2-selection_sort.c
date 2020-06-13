#include "sort.h"

/**
 * swap_int - Swaps two ints
 * @a: From
 * @b: To
 *
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

/**
 * selection_sort - Order a list with `Selection` method.
 * @array: It's the array to sort.
 * @size: It's the size of @array.
 *
 * Return: void.
 */
void selection_sort(int *array, size_t size)
{
	size_t tripper, s_tripper, c_pos;

	if (!array || size < 2)
		return;

	for (tripper = 0; tripper < size - 1; tripper++)
	{
		c_pos = tripper;

		for (s_tripper = tripper + 1; s_tripper < size; s_tripper++)
			if (array[s_tripper] < array[c_pos])
				c_pos = s_tripper;

		if (c_pos != tripper)
		{
			swap_int(&array[tripper], &array[c_pos]);
			print_array(array, size);
		}
	}
}
