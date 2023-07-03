#include "main.h"
#include <string.h>
#include <stdbool.h>
/**
 * _strspn -  gets the length of a prefix substring
 * @s:string to be scanned
 * @accept:string containing the characters to match.
 * Return:nothing
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int init, i, j;
	unsigned int l1 = strlen(s);
	unsigned int l2 = strlen(accept);

	for (i = 0; i < l1; i++)
	{
		bool fm = false;

		for (j = 0; j < l2; j++)
		{
			if (accept[j] == s[i])
			{
				fm = true;
				break;
			}
		}
		if (fm == false)
		{
			break;
		}
		else
			init++;
	}
	return (i);
}
