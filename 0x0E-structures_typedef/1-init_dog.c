#include "dog.h"
#include <stdio.h>

/**
 *init_dog - initilizes the dog structure
 *@d: pointer to the structure
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *Return: none
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
