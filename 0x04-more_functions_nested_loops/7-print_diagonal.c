#include "main.h"

/**
 * Print_diagonal - Prints a diagonal lines according to parametre
 * @n: The number of times to print diogonal lines
 * Return: empty
 */
void print_diagonal(int n)
{
	int c, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < n; c++)
		{
			for (y = 0; y < c; y++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
