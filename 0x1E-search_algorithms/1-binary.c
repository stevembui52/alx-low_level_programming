#include "search_algos.h"

/**
  * binary_search_r - a recursive function to perform binary search
  * @array:array of integers to search  from
  * @left:the left side of the array
  * @right:the upper-bound of the array
  * @vaue:the value to search for
  *
  * Return:index of value found else -1
  */
int binary_search_r(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	while (left <= right)
	{
		mid = left + (right - left)/2;

		printf("Searching in array");
	    for (i = left; i <= right; i++)
		{
			printf("%s %d", (i == 0) ? ":" : ",", array[i]);
		}
        printf("\n");
		if (value == array[mid])
		{
			return (mid);
		}	
		else if (value > array[mid])
		{
			return (binary_search_r(array, mid + 1, right, value));
		}
		else 
		{
			return (binary_search_r(array, left,  mid - 1, value));
		}
	}
	return (-1);
}

/**
  * binary_search - searches fo a value in a sorted array of integers
  * @array:array to search from
  * @size:the size of the array
  * @value:value to search for
  *
  * Return:result of the search from binary_search_r
  */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = binary_search_r(array, 0, size - 1, value);
	return (index);

	if (array == NULL || size == 0)
		return (-1);
}
