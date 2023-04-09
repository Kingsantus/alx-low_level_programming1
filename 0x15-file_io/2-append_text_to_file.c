#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of the file.
 * @text_content: Text to add at the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 * If you do not have the required permissions to write the file, return -1.
 * The file permissions must be rw-------.
 * If the file already exists, append to it.
 * If the file does not exist, do not create it
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0;
	off_t offset;
	mode_t mode = S_IWUSR;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, mode);
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

	offset = lseek(fd, 0, SEEK_CUR);
	if (offset == (off_t)-1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}

