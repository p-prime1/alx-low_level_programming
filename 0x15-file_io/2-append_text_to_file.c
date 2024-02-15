#include "main.h"

/**
 * append_text_to_file - Appends text to a file
 * @filename: Name of file to be appended
 * @text_content: Content to be appended to the file
 * Return: Returns -1 on failure on failure and 1 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND);
	if (fd == -1)
		return (-1);
	i = write(fd, text_content, sizeof(text_content));
	if (i == -1)
		return (-1);
	close(fd);
	return (1);
}
