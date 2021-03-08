#include <stdio.h>
#include "dog.h"

/**
 * init_dog - funtion that initialises dog structure
 * @d: struct variable
 * @name: first variable
 * @age: second variable
 * @owner: third variable
 */

void init_dog(char *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
