#include "main.h"

/**
 * print_line - Draws a straight line according to parameter
 * @n: The number of line to draw
 * Return: empty
 */

void print_line(int n)
{
	int y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 0; y < n; y++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
