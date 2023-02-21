#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to be treated
 * Return: Value of the last digit of number 
 */
int print_last_digit(int n)
{
	int last_dt;

	last_dt = n % 10;
	if (last_dt < 0)
	{
		last_dt = last_dt * -1;
	}
	_putchar(last_dt + '0');
	return (last_dt);
}
