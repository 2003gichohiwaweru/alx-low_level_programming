#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * 
 * @filename: A pointer to the name of the file.
 *
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         Op/wr - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wr, op;
	char *buff;

	if (filename == NULL)
		return (0);


	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);

	if (op == -1 || rd == -1 || wr != rd)
	{
		free(buff);
		return  (0);

	}

	free(buff);
	close(0);

	return (wr);

}
