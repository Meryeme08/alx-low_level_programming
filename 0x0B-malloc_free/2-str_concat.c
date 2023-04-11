#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	size_t s1_len, s2_len;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	concat_str = malloc(s1_len + s2_len + 1);
	if (concat_str == NULL)
		return (NULL);

	memcpy(concat_str, s1, s1_len);
	memcpy(concat_str + s1_len, s2, s2_len);
	concat_str[s1_len + s2_len] = '\0';

	return (concat_str);
}
