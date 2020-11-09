#include "holberton.h"

/**
 * main - function that prints a list
 * @ac: file to read and write
 * @av: numbers of characters
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(int ac, char **av)
{
	int fileto = 0, filefrom = 0, rd;
	char *buf = malloc(1024);

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fileto = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fileto == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", av[2]);
		exit(99);
	}
	filefrom = open(av[1], O_RDONLY);
	if (filefrom == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	rd = read(filefrom, buf, 1024);
	write(fileto, buf, rd);
	close(fileto);
	close(filefrom);
	if (fileto == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fileto);
		exit(100);
	}
	if (filefrom == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", filefrom);
		exit(100);
	}
	return (0);
}
