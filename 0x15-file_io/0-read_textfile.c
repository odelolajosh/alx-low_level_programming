#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output
 *
 * @filename: file name
 * @letters: numbers of letters to read and print
 *
 * Return: if successful return actual number of letters it could read
 * and print otherwise return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t read_b, write_b;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	read_b = read(fd, buf, letters);
	write_b = write(STDOUT_FILENO, buf, read_b);

	close(fd);
	free(buf);

	return (write_b);
}

