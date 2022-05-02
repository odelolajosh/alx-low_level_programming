#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t read_b, write_b;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	read_b = read(fd, buf, letters);
	if (read_b == -1)
		return (0);

	close(fd);

	write_b = write(STDOUT_FILENO, buf, read_b);
	if (write_b == -1)
		return (0);

	free(buf);

	return (write_b);
}

