#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: file name
 * @text_content: text content
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, strlen, b_read;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (strlen = 0; text_content[strlen]; strlen++)
			;

		b_read = write(fd, text_content, strlen);
		if (b_read == -1)
			return (-1);
	}

	close(fd);

	return (1);
}

