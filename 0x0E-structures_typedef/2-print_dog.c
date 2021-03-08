#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that printsstruct dog
 * @d: dog struct
 * @name: first argument
 * @age: second argument
 * @owner: third argument
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	(d->name == NULL) ? printf("Name: (nul)\n")
		: printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	(d->owner == NULL) ? printf("Owner: (nul)\n")
		: printf("Owner: %s\n", d->owner);
}
