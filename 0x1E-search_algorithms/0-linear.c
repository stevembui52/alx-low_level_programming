#include <stdio.h>
#include <stdlib.h>
/**
  *
  *
  *
  */

int linear_search(int *array, size_t size, int value);

int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL)
		return -1;

	while (index < size)
	{
		printf("Value checked array[%ld] = %d\n", index, array[index]);
		if(array[index] == value)
		{
			return index;
		}
		index++;
	}
	return -1;
}

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        10, 1, 42, 3, 4, 42, 6, 7, -1, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
    printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
    printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));
    return (EXIT_SUCCESS);
}
