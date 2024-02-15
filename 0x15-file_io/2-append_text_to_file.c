#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

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
