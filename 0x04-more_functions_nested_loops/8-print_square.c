#include "main.h"

/**
 * Prints_square - Prints n square according to n number of times
 * @size: The number of squares/number  times
 * Return: empty
 */

void print_square(int size)
{
	int c, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < size; c++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
