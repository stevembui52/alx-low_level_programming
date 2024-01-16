#include <stdio.h>
#include <stdlib.h>
/**
  *
  *
  *
  *
  */
int binary_search_r(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;
	char a;

	while (left <= right)
	{
		mid = left + (right - left)/2;

		printf("Searching in array");
	    for (i = left; i <=right; i++)
		{
			if (i == 0)
				a = ':';
			else
				a = ',';
            printf("%c %d", a, array[i]);
		}
        printf("\n");
		if (value == array[mid])
		{
			return (mid);
		}	
		else if (value > array[mid])
		{
			return binary_search_r(array, mid + 1, right, value);
		}
		else 
		{
			return binary_search_r(array, left,  mid - 1, value);
		}
	}
	return -1;
}

int binary_search(int *array, size_t size, int value)
{

	if (array == NULL || size == 0)
        return (-1);
	return binary_search_r(array, 0, size -1, value);
}

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
    printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
    printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));
    return (EXIT_SUCCESS);
}

