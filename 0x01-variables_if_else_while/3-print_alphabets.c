#include <stdio.h>
/**
 * main main block
 * Descriptions: print the alphabet in lower cases
 * and the uppercase, follow by a new line
 * Return: o
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
