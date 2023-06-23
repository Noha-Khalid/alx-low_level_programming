#include "main.h"

/**
 * print_diagonal - Prints a diagonal line of backslashes.
 * @n: The number of backslashes to print.
 */
void print_diagonal(int n)
{
	int i, z;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (z = 1; z < i; z++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
		}
	}
}
