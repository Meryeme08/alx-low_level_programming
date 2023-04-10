#include "main.h"
#include <stddef.h>

/**
 * _strchr - finds the first occurrence of a character in a string.
 * @s: string to search
 * @c: character to find
 *
 * Return: pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (*s == c ? s : NULL);
}
