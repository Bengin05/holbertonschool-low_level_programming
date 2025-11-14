#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - libère la mémoire allouée pour un chien
 * @d: pointeur vers la structure dog_t à libérer
 *
 * Description :
 *  La fonction libère d'abord la mémoire allouée pour les chaînes
 *  name et owner, puis libère la structure elle-même.
 *  Si le pointeur est NULL, la fonction ne fait rien.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
