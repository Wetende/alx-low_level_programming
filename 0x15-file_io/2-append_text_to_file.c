#include "main.h"
#include <stdio.h>
/**
 * append_text_to_file - appends text to the end of a file
 * @filename: the name of the file to append to
 * @text_content: the content to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, wr_stat;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (len = 0; text_content[len]; len++)
	;

	wr_stat = write(fd, text_content, len);

	close(fd);

		return (wr_stat == -1 ? -1 : 1);
}
