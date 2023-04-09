#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
* main - Entry point. Copies the content of a file to another file.
* @argc: Argument count.
* @argv: Array of argument strings.
*
* Return: 0 on success, or the appropriate error code.
*/
int main(int argc, char **argv)
{
	int fd_from, fd_to, read_bytes, write_bytes;
	char buffer[BUFFER_SIZE];
	const char *file_from, *file_to;

	/* Validate arguments */
	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	file_from = argv[1], file_to = argv[2];

	/* Open the source file for reading */
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from), exit(98);

	/* Open the destination file for writing, truncating it if it exists */
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to), exit(99);

	/* Copy the contents of the source file to the destination file */
	while ((read_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_bytes = write(fd_to, buffer, read_bytes);
		if (write_bytes == -1 || write_bytes != read_bytes)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to), exit(99);
	}

	/* Check for errors during reading */
	if (read_bytes == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from), exit(98);

	/* Close the file descriptors */
	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);

	return (0);
}
