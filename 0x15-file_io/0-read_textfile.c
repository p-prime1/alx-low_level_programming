#include "main.h"

/**
 * read_textfile - Reads text from a file and prints to posix
 * @filename: Name of file to be read
 * @letters: Number of letters to be readand printed
 * Return: Returns 0 on failure or number of btes read on success
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t i;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	i = read(fd, &buffer, letters);
	if (fd == -1 || i == -1)
		return (0);
	write(1, buffer, letters);
	close(fd);
	return (i);
}

