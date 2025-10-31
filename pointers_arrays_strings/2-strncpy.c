#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 * @n: maximum number of bytes to copy from src
 *
 * This function copies up to @n bytes from the string pointed to by @src
 * to the buffer pointed to by @dest. If the length of @src is less than @n,
 * the remainder of @dest will be padded with null bytes ('\0').
 * If @src contains @n or more bytes, no null byte is added to @dest.
 *
 * Return: pointer to the resulting string @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i = 0;

    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    if (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);

}