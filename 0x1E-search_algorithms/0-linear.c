#include "search_algos.h"
/**
  * linear_search - searches in an array of integers by Linear search algorithm
  * @array:the array of integers
  * @size:the size of the array
  * @value:value to search for
  * Return: index of the value if found -1 if else
  */

int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL)
		return (-1);

	while (index < size)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
		{
			return (index);
		}
		index++;
	}
	return (-1);
}
