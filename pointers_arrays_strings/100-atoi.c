#include "main.h"
#include <stdio.h>

/**
 * _atoi - convertit une chaîne de caractères en entier
 * @s: pointeur vers la chaîne à convertir
 *
 * Description: prend en compte tous les signes '+' et '-' avant le nombre.
 * Si aucun chiffre n'est présent dans la chaîne, la fonction renvoie 0.
 *
 * Return: l'entier obtenu à partir de la chaîne, ou 0 si aucun chiffre trouvé
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int result = 0;
	int started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;

		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			result = (result * 10) + (s[i] - '0');
		}
		else if (started)
			break;

		i++;
	}

	if (sign < 0)
		return (-result);
	return (result);
}
