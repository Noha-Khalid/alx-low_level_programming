#include "main.h"

/**
 * print_square - Prints a square of '#' characters.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int r, c;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (r = 1; r <= size; r++)
		{
			for (c = 1; c <= size; c++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
