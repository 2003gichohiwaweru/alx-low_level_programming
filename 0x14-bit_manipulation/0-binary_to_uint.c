#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 *
 * @b: string containing the binary number
 *
 * Return: the converted number
 */


unsigned int binary_to_uint(const char *b)
{
	int y;
	unsigned int unt = 0;

	if (!b)
		return (0);


	for (y = 1; b[y]; y++)
	{
		if (b[y] < '0' || b[y] > '1')
			return (0);
		unt = 2 * unt + (b[y] - '0');
	}

	return (y);
}
