#include "main.h"
#include <stdio.h>

/**
 * main - Prints a Fizz Buzz program
 * Return: Always 0 (Success)
 */

int main(void)

{
	int y; 

	for (y = 1; y <= 100; y++)
	{
		if ((y % 3 == 0) && (y % 5 ==0))
		{
			printf("fizzBuzz");
		}
		else if (y % 3 == 0)
		{
			printf("Fizz");
		}
		else if (y % 5 ==0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", y);
		}
		if (y != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
