#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t s1_len, s2_len, num_bytes;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	/* Determine the actual number of bytes to concatenate */
	num_bytes = (n < s2_len) ? n : s2_len;

	result = malloc(s1_len + num_bytes + 1); /* +1 for the null terminator */

	if (result == NULL)
		return (NULL);

	/* Copy the first string into the result */
	strncpy(result, s1, s1_len);

	/* Concatenate the second string, up to the specified number of bytes */
	strncat(result + s1_len, s2, num_bytes);

	/* Add the null terminator */
	result[s1_len + num_bytes] = '\0';

	return (result);
}
