#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: Pointer to the string to be printed.
 *
 * Return: void
 */
void print_rev(char *s)
{
int i = 0;

    /* Find the length of the string */
while (s[i] != '\0')
{
i++;
}

    /* Print the characters in reverse order */
while (i > 0)
{
_putchar(s[--i]);
}

_putchar('\n');
}
