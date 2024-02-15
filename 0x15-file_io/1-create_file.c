#include "main.h"

int create_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_RDONLY, 700);
	if (fd == -1)
	{
		if (errno == EEXIST)
			fd = open(filename, O_TRUNC | O_WRONLY | O_RDONLY);
		else
			return (-1);
	}
	if (text_content != NULL)
	{
		i = write(1, filename, sizeof(text_content));
	}
	if (i == -1)
		return (-1);
	return (1);
}
