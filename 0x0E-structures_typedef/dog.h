#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - new struct type for dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: 0
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /*DOG_H*/
