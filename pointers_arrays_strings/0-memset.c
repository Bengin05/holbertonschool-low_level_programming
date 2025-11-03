#include "main.h"

/**
 * _memset - remplit une zone mémoire avec un octet constant
 * @s: pointeur vers la zone mémoire à remplir
 * @b: octet constant utilisé pour le remplissage
 * @n: nombre d’octets à remplir
 *
 * Return: pointeur vers la zone mémoire s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
