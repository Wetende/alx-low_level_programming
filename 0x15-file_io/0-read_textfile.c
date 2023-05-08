#include "main.h"

/**
 * 
 * read_textfile - reads a text file and prints it to the POSIX standard out
 * @filename: name of the file to read
 * @letters: number of characters to print
 *
 * Return: On success, returns the total number of characters read and printed.
 * On error, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor, total_chars_read, read_result;
	char buffer[BUFSIZE];

	if (filename == NULL)
	{
		return (0);
	}

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		return (0);
	}

	total_chars_read = 0;
	read_result = 1;

	while (letters > BUFSIZE && read_result != 0)
	{
		read_result = read(file_descriptor, buffer, BUFSIZE);
		write(STDOUT_FILENO, buffer, read_result);
		total_chars_read += read_result;
		letters -= BUFSIZE;
	}

	read_result = read(file_descriptor, buffer, letters);
	write(STDOUT_FILENO, buffer, read_result);
	total_chars_read += read_result;

	close(file_descriptor);

	return (total_chars_read);
}
