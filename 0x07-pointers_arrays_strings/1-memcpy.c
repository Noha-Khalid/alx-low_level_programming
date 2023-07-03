#include "n^in.h"

/**
 * _ncpy - Copies a string.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to be copied.
 *
 * Return: Pointer to the destination string (dest).
 */
char *_ncpy(char *dest, char *src, unsigned int n)
{
unsigned int itr;

for (itr = 0; itr < n && src[itr] != '\0'; itr++)
dest[itr] = src[itr];

for (; itr < n; itr++)
dest[itr] = '\0';

return (dest);
}
