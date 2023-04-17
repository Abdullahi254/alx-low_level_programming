#include "dog.h"
/**
 * init_dog - initailizes dog struct
 * @d: pointer to dog struct
 * @name: pointer to name param
 * @age: age param
 * @owner: owner param
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
