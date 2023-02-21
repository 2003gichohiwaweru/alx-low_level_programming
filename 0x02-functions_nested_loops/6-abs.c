#include "main.h"

/**
 * _abs - Compute the absolute value of an interger.
 * @c: The number to be computed.
 * Return: Absolute value of number or zero
 */

int print_abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
