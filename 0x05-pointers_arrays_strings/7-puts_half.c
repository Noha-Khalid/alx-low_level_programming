#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to the string.
 *
 * Return: void
 */
void puts_half(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
for (i /= 2; str[i] != '\0'; i++)
{
 _putchar(str[i]);
}

_putchar('\n');
}
