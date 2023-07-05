#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse recursively.
 *
 * @s: The string to be printed in reverse.
 *
 * Description:
 *     This function prints the characters of the input string @s in reverse
 *     order recursively. It starts by calling itself with the next character
 *     in the string until it reaches the null terminator. Then, it prints
 *     each character in reverse order.
 *
 * Return: None.
 */
int _strlen_recursion(char *s)
int n;
if (*s > '\0')
{
   n += _strlen_recursion(s + 1) + 1;
}
return (0);
