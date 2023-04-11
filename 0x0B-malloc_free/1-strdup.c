#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
		return (NULL);

	duplicate = strdup(str);

	if (duplicate == NULL)
		return (NULL);

	return (duplicate);
}
