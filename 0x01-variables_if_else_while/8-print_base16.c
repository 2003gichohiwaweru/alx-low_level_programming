#include <stdio.h>
#include <stdlib.h>
/**
 * main  main block
 * Description: prints all single digitumber of base 16
 * Startinf from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
