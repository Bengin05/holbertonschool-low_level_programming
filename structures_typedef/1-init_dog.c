#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialise une variable de type struct dog
 * @d: pointeur vers la structure à initialiser
 * @name: nom du chien
 * @age: âge du chien
 * @owner: nom du propriétaire
 *
 * Description:
 * Cette fonction permet d'initialiser les membres d'une structure
 * de type struct dog avec les valeurs fournies. Si le pointeur `d`
 * est NULL, la fonction ne fait rien (évite une erreur de segmentation).
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
