#include "holberton.h"

/**
 * flip_bits - function that prints a list
 * @n: number 1
 * @m: number 2
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, count1, count2;
	char *buf = malloc(letters * sizeof(char));

	if (buf == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}
	count1 = read(fd, buf, letters);
	if (count1 == -1)
	{
		return (0);
	}
	count2 = write(STDOUT_FILENO, buf, count1);
	if (count2 == -1)
	{
		return (0);
	}
	if (count2 != count1)
	{
		return (0);
	}
	close(fd);
	return (count2);
}
