#include "dog.h"
#include <stdio.h>
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dog;
	
	if (name == NULL)
		return (NULL);
	if (age < 0 || age == NULL)
		return (NULL);
	if (owner == NULL)
		return (NULL);

	dog.name = name;

	dog.age = age;

	dog.owner = owner;

	return (dog);
}

