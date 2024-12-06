#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * create_file - Creates a file and writes text_content into it.
 * @filename: The name of the file to create.
 * @text_content: The NULL-terminated string to write into the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bwrite;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		text_content = "";
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC | S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	bwrite = write(fd, text_content, strlen(text_content));
	if (bwrite == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
