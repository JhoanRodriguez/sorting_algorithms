#include "sort.h"


void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void bubble_sort(int *array, size_t size)
{
    size_t x = 0;
    size_t sorted = 1;
    size_t tmp = 0;

    while(sorted != 0)
    {
        tmp = sorted;
        for (x = 0 ; x < size - 1; x++)
        {
            if (array[x] > array[x + 1])
                {
                    swap_int(&array[x], &array[x+1]);
                    sorted += 1;
                }
        }
        if (tmp == sorted)
             sorted = 0;
        print_array(array, size);
    }
}