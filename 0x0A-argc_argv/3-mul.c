#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiplies two numbers.
 *@argc:argument count
 *@argv:argument vector
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int a = 0;
	int b = 0;
	int res;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		res = a * b;
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
