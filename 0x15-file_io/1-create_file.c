#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: file name
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, strlen, bytes_w;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (strlen = 0; text_content[strlen]; strlen++)
		;

	bytes_w = write(fd, text_content, strlen);
	if (bytes_w == -1)
		return (-1);

	close(fd);

	return (1);
}

