#include "dog.h"
#include <stdio.h>

/**
 * print_dog - fucntion that prints struct dog
 * @d: varibale of struct dog
 *
 * Return: if d is NULL print (nil)
 * if d is NULL print nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age < 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);

	return (0);
}
