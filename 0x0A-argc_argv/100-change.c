#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number coins to make change for an amount of money
 *@argc:argument count
 *@argv=:argument vector
 *Return:0 on success
 */
int main(int argc, char *argv[])
{
	int cen = atoi(argv[1]);
	int coins[] = {25, 10, 5, 2, 1};
	int numCoins = sizeof(coins) / sizeof(coins[0]);
	int count = 0;
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cen < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < numCoins; i++)
	{
		while (cen >= coins[i])
		{
			cen -= coins[i];
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
