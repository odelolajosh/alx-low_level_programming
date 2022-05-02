#include "main.h"
#include "stdio.h"

/**
 * exit_with_error - exits with error
 *
 * @message: error message
 * @code: exit code
 */
void exit_with_error(char *message, int code)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

/**
 * error_file_access - check if the files can be accessed
 *
 * @fd: file descriptor for file
 * @filename: name of file source
 * @action: action
 * @code: exit code for error
 */
void error_file_access(int fd, char *filename, char *action, int code)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't %s %s\n", action, filename);
		exit(code);
	}
}

/**
 * error_file_close - checks if a file can be closed
 *
 * @fd: file descriptor for file
 */
void error_file_close(int fd)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - entry file
 * copies content of a file to another file
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, rclose;
	char buf[1024];
	ssize_t bwrite, bread;

	if (argc  != 3)
		exit_with_error("Usage: cp file_from file_to", 97);

	fd_from = open(argv[1], O_RDONLY);
	error_file_access(fd_from, argv[1], "read from file", 98);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file_access(fd_to, argv[2], "write to", 99);

	bread = 1024;
	while (bread == 1024)
	{
		bread = read(fd_from, buf, 1024);
		error_file_access(bread, argv[1], "read from file", 98);

		bwrite = write(fd_to, buf, bread);
		error_file_access(bwrite, argv[2], "write to", 99);
	}

	rclose = close(fd_from);
	error_file_close(rclose);

	rclose = close(fd_to);
	error_file_close(rclose);

	return (0);
}
