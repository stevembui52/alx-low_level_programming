#include <stdio.h>
/**
 * main - check code
 *
 * Return: 0 always on success
 */
int main(void)
{
	int a;

	a = 1;
	printf("%d", a);
	for (a = 2; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
		 printf("%d ", a);
		}
	}
	printf('\n');
	return (0);
}

