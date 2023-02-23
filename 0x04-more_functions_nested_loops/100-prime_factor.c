#include <stdio.h>
#include <stdlib.h>

/**
 * main -Finds and prints the largest prime number of a number
 * Result: The largets prime number
 */

int main()
{
    	long  number = 612852475143;
    	long factor = 2;
    	long  largestFactor = 0;

    	while (number != 1)
    	{		
        	if (number % factor == 0) 
		{
            		number /= factor;
            		largestFactor = factor;
        	}	
       		else 
		{
            		factor++;
        	}
    	}
	printf("%ld\n", largestFactor);
	return (0);
}
