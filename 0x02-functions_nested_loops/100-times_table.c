#include "main.h"

/**
 * Print_times_table - Prints the time table of the input,
 * starting ith 0.
 * @n:The value of the times table to be printed
 */
void print_times_table(int n)
{
	int no, mult, z;

	if (n >= 0 && n <= 15)
	{
		for (no = 0; no <=n; no++)
		{
			_putchar('0');
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');
				z = no * mult;
				if (z <= 99)
				_putchar(' ');
				if (z >= 100)
				{
					_putchar((z / 100) + '0');
					_putchar(((z /  10)) % 10 + '0');
				}
				else if (z <= 99 && z <= 10)
				{
					_putchar((z / 10) + '0');
				}
				_putchar((z % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
