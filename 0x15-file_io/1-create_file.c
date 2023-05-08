#include "main.h"

/**
 * create_file - this function creates an array of chars, and initializes
 ** @text_content: is a NULL terminated string to write to the file
 *** @filename: is the name of the file to create
 **** Return: 1 (Success), -1 (Error)
 */

int create_file(const char *filename, char *text_content)
{
	int op, wr, z = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (z = 0; text_content[z];)
			z++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, z);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
