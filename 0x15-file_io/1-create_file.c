#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates a new file with the given name and content
 * @filename: the name of the file to create
 * @text_content: the content to write to the file (NULL if empty)
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		if (write(fd, text_content, len) != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
