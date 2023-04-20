#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name using pointer to function
 * @name: The name to be printed.
 * @f: A pointer to a function that prints a name.
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

