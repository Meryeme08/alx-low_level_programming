#include "main.h"
#include <ctype.h>

/**
 * _atoi - convert a string into an integer.
 *
 * @s: the string to use.
 *
 * Return: integer.
 */

int _atoi(char *s)
{
	int sign = 1, res = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		/* skip leading whitespace */
		if (s[i] == ' ' || s[i] == '\t')
		{
			i++;
			continue;
		}

		/* handle sign */
		if (s[i] == '-')
		{
			sign = -1;
			i++;
		}
		else if (s[i] == '+')
		{
			sign = 1;
			i++;
		}

		/* convert digits to integer */
		while (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10 + (s[i] - '0');
			i++;
		}

		/* return final result */
		return (sign * res);
	}

	return (0);
}
