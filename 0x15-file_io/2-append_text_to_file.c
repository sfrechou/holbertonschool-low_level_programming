#include "holberton.h"

/**
 * append_text_to_file - function that prints a list
 * @filename: file to read and write
 * @text_content: numbers of characters
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_APPEND | O_RDWR);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
		{
			length++;
		}
		write(fd, text_content, length);
	}
	close(fd);
	return (1);
}
