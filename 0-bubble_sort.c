include "sort.h"


void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void bubble_sort(int *array, size_t size)
{
    int x;

    for (x = 0; x < size - 1; x++ )
    {
        if (array[x] < array[x + 1])
    }
}