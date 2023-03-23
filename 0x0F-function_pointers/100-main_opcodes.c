#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints the opcodes of a given function
 * @num_bytes: number of bytes to print
 */
void print_opcodes(int num_bytes);

/**
 * main - entry point of program
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: 0 on success, 1 if wrong number of arguments,
 * 2 if negative byte count
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(num_bytes);

	return (0);
}
void print_opcodes(int num_bytes)
	{
	char *ptr = (char *)main;

	for (int i = 0; i < num_bytes; i++)
	{
		printf("%02x ", ptr[i] & 0xff);
	}
	printf("\n");
}
