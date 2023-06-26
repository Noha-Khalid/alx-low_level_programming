#include "main.h"

/**
 * _strcpy - Copies a string from source to destination.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the destination string.
 */
char *_strcpy(char *dest, const char *src)
{
int i = -1;

do
{
i++;
dest[i] = src[i];
} while (src[i] != '\0');

return dest;
}
