#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: The string to get the length for
 * Return: The length of @str.
 */

int _strlen( char *s)

{
	int t = 0;

	while (*s++)
		t++;
	return (t);
}

