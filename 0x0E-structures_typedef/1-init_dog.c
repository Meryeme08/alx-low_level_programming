#include <stddef.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog new_dog;

	new_dog.name = name;
	new_dog.age = age;
	new_dog.owner = owner;

	if (d != NULL)
		*d = new_dog;
}
