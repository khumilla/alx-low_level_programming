#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize variable type struct dog
 * @name: name
 * @age: age
 * @owner: owner
 * @d: struct dog variable
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	
	d->name = name;
	d->age = age;
	d->owner = owner;
}
