#include "main.h"

/**
 * _memcpy - copie une zone mémoire vers une autre
 * @dest: pointeur vers la zone de destination
 * @src: pointeur vers la zone source
 * @n: nombre d’octets à copier
 *
 * Return: pointeur vers la zone de destination dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
