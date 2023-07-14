#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *create_buffer(char *file);
void close_file(int fd);
/**
 * create_buffer - Allocates 1024 bytes for a buffer
 * @file: The name of the file buffer is storing chars for
 * Return: A pointer to the newly allocated buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - closes file descriptors
 * @fd: The file descriptor to be closed
 */
void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copies the contents of a file to another file
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointers to the atguments
 * Return: 0 on success
 * Description: ifthe argument count is incorrect exit code 97
 * if file_from does not exit or cannot be read exit 98
 * if file cannot be written or created to exit code 99
 * if file_to
