#include "main.h"

/**
 * more_numbers - print 10 times the number from 0 up to 14
 * Return: 10 times of the numbers from 0 up to 14
 */

void more_numbers(void)

{
	int c, i;

	for (i = 0; i <= 10;  i++)
	{
		for (c = 0; c <=14; c++)
		{
			if (c > 9)
			{
				_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
