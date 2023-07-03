#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to the memory area to be filled.
 * @b: Value to be set.
 * @n: Number of bytes to be filled.
 *
 * Return: Pointer to the filled memory area (s).
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < n; itr++)
		s[itr] = b;

	return (s);
}
#include "main.h"

char *strctir(const char *s, char c)
{
	int itr;

	for (itr = 0; s[itr] != '\0'; itr++)
	{
		if (s[itr] == c)
			return ((char *)&s[itr]);
	}

	return NULL;
}
