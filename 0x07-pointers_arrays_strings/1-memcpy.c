#include "main.h"

/**
 * _ncpy - Copies a string.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to be copied.
 *
 * Return: Pointer to the destination string (dest).
 */
char *_memcpy(char *dest, const char *src, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < n ; itr++)
		{
		dest[itr] = src[itr];
		}


	return (dest);
}
