#include <stdio.h>
#include "dog.h"

/**
 * print_dog - affiche les informations d'une structure de type struct dog
 * @d: pointeur vers la structure à afficher
 *
 * Description:
 * Cette fonction affiche le nom, l’âge et le propriétaire d’un chien
 * contenu dans une structure de type struct dog.
 * - Si le pointeur `d` est NULL, la fonction ne fait rien.
 * - Si un des éléments (name ou owner) est NULL, la fonction affiche (nil)
 *   à la place de la valeur manquante.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
		return;
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";

		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
