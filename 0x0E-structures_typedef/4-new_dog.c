#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: The new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	int lname, lowner, i;

	if (!name || !owner)
		return (NULL);

	p = malloc(sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (lname = 0; name[lname]; lname++)
		;

	for (lowner = 0; owner[lowner]; lowner++)
		;

	p->name = malloc(sizeof(char) * (lname + 1));
	p->owner = malloc(sizeof(char) * (lowner + 1));

	if (!(p->name) || !(p->owner))
	{
		free(p->name);
		free(p->owner);
		free(p);
		return (NULL);
	}

	for (i = 0; i < lname; i++)
		p->name[i] = name[i];
	p->name[i] = '\0';

	p->age = age;

	for (i = 0; i < lowner; i++)
		p->owner[i] = owner[i];
	p->owner[i] = '\0';

	return (p);
}
