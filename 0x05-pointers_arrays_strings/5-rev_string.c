#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed.
 *
 * Return: void
 */
void rev_string(char *s)
{
int i, len;
char temp;

    /* Find the length of the string */
for (len = 0; s[len] != '\0'; len++)
    /* Swap characters from the beginning and end of the string */
for (i = 0; i < len / 2; i++)
{
temp = s[i];
s[i] = s[len - 1 - i];
s[len - 1 - i] = temp;
}
}
