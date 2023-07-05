#include "main.h"
/**
 * _print_rev_recursion - Prints a string reverse recursively followed by a new line.
 *
 * @s: The string to be printed.
 *
 * Description:
 * This function recursively prints each character of the input string reverse, @s,
 * followed by a new line character. If the string is empty (reached the null
 * terminator), it prints only the new line character.
 *
 * Return: None.
 */
void _print_rev_recursion(char *s)
{
if (*s > '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
