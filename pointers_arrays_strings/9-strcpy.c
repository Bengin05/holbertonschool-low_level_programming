#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copie la chaîne pointée par src, y compris l'octet nul de fin,
 * dans le buffer pointé par dest
 * @dest: pointeur vers le buffer de destination
 * @src: pointeur vers la chaîne source à copier
 *
 * Return: le pointeur vers dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
