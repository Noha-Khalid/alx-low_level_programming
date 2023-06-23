#include "main.h"

/**
 * print_line - Prints a line of underscores.
 * @n: The number of underscores to print.
 */
void print_line(int n)
{
	int num;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (num = 1; num <= n; num++)
			_putchar('_');
		_putchar('\n');
	}
}
