#include "main.h"
/**
 * _puts_recursion - Prints a string recursively followed by a new line.
 *
 * @s: The string to be printed.
 *
 * Description:
 * This function recursively prints each character of the input string, @s,
 * followed by a new line character. If the string is empty (reached the null
 * terminator), it prints only the new line character.
 *
 * Return: None.
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
}
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
