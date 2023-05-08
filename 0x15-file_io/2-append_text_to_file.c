#include "main.h"

/**
 * len_func - this function finds the length of a string
 ** @str: a pointer to the string
 *** Return: the length
 */

size_t len_func(char *str)
{
	size_t l;

	for (l = 0; str[l]; l++)
		;
	return (l);
}

/**
 * append_text_to_file - this function appends a text at the end of a file
 ** @filename: file name
 *** @text_content: NULL terminated string to add at the end of the file
 * Return: 1 (Success), -1 (Error)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int num;
	ssize_t length;

	if (filename == NULL)
		return (-1);
	num = open(filename, O_WRONLY | O_APPEND);
	if (num == -1)
		return (-1);
	if (text_content != NULL)
		length = write(num, text_content, len_func(text_content));
	close(num);
	if (lenght == -1)
		return (-1);
	return (1);
}
