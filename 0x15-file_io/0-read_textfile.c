#include "main.h"
#include <stdlib.h>



/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
	ssize_t op, rid, wri;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rid = read(op, buffer, letters);
	wri = write(STDOUT_FILENO, buffer, rid);

	if (op == -1 || rid == -1 || wri == -1 || wri != rid)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(op);

	return (wri);
}
