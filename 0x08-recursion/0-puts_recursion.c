#include "main.h"

void _puts_recursion(char *s)
{
    printf("%s\n", s); // Print the string s
}

int main(void)
{
    _puts_recursion("Puts with recursion");
    return 0;
}
