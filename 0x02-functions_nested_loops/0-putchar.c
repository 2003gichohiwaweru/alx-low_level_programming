#include <unistd.h>>
/*
 * -putchar - writes the character c to stdout
 *  @: The characterbto print 
 *  Return: Onsuccess 1.
 *  On error, -1 returned, and error is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
