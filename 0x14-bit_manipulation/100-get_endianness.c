#include "main.h"


/*
 * get_endianness - Chechs the endianness.
 *
 * Return: If big_endian - 0.
 * 	   If little_endian - 1.
 *
 */

int get_endianness(void)

{
	int i = 1;
	char *endian = (char *)&i;


	if (*endian == 1)
		return (1);


	return (0);

}
