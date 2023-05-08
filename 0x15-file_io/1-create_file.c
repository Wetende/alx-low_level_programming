#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates a file with rw------- permissions
 * @filename: name of the file, if NULL, return -1
 * @text_content: contents of the file. If NULL, create an empty file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)

{
	if (filename == NULL)
	{
		return (-1);
	}

	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		int len = 0;

		while (text_content[len] != '\0')
		{
			len++;
		}

	if (write(fd, text_content, len) == -1)
		{
		close(fd);
		return (-1);
		}
	}

	if (close(fd) == -1)
	{
		return (-1);
	}

	return (1);
}


