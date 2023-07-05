#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string recursively.
 *
 * @s: The string to find the length of.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
    /* Base case: if the current character is the null terminator */
if (*s == '\0')
{
return (0);
}
else
{
return (_strlen_recursion(s + 1) + 1);
}
}
