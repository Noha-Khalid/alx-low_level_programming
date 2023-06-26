#include "main.h"

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to be written.
 *
 *         On error, returns -1 and sets errno.
 */
void _puts(char *str)
{
    while (*str != '\0')
    {
        _putchar(*str + 0);
        str++;
    }
    _putchar('\n');
}
