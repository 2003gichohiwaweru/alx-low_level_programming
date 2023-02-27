#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The character to get the length for
 * Return: The length of string.
 */

int _strlen(char *s)

{
	int t = 0;

	while (*s++)
		t++;
	return (t);
}

