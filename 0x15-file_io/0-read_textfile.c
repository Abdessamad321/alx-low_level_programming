#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - this function reads a text file and prints it to POSIX standard output.
 ** @filename: A pointer
 *** @letters: is the num of letters the function should read and print.
 **** Return: 0 (Success)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, re, wr;
	char *p;

	if (filename == NULL)
		return (0);

	p = malloc(sizeof(char) * letters);
	if (p == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	re = read(op, p, letters);
	wr = write(STDOUT_FILENO, p, re);

	if (op == -1 || re == -1 || wr == -1 || wr != re)
	{
		free(p);
		return (0);
	}

	free(p);
	close(op);

	return (wr);
}
