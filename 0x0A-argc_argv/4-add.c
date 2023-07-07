#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 *@argc:argument count
 *@argv:argument vector
 *Return:0 on success
 */
int main(int argc, char *argv[])
{
	int sum = 0, a = 0;
	int i = 0, j = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		a = atoi(argv[i]);
		sum = sum + a;
	}
	printf("%d\n", sum);
	return (0);
}
