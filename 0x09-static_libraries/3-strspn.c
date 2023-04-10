#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: number of bytes in s that consist of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i, j;
	int accept_len = 0;

	while (accept[accept_len])
		accept_len++;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < accept_len; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
		if (j == accept_len)
			break;
	}

	return (n);
}
