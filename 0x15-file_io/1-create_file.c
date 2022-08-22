#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - creates a file with read/write permissions
 * @filename: name of file
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure or if filenamame is null
 * If text_content is NULL create an empty file
 * If the file exists, truncate it
 */

int create_file(const char *filename, char *text_content)
{
	int len;
	int fd, wr;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_WRONLY | O_CREAT, 0600);
		if (fd == -1)
			return (-1);
		return (1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	for (len = 0; text_content[len]; len++)
	{}
	wr = write(fd, text_content, len);
	if (wr == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
