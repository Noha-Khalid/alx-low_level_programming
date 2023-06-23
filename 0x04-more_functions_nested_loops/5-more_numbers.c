#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14 ten times.
 */
void more_numbers(void)
{
	int r, i;

	for (r = 0; r < 10; r++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');

			_putchar((i % 10) + '0');
		}

		_putchar('\n');
	}
}
