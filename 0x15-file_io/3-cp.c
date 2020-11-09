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
	int fileto = 0, filefrom = 0, rd, closefilefrom, closefileto;
	char *buf = malloc(1024);

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fileto = open(av[2], O_CREAT | O_TRUNC | O_RDWR, 0664);
	if (fileto == -1 || av[1] == NULL)
	{
		dprintf(2, "Error: Can't write to file %s\n", av[2]);
		exit(98);
	}
	filefrom = open(av[1], O_RDWR, 0664);
	if (filefrom == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(99);
	}
	rd = read(filefrom, buf, 1024);
	write(fileto, buf, rd);
	closefileto = close(fileto);
	closefilefrom = close(filefrom);
	if (closefileto == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", closefileto);
		exit(100);
	}
	if (closefilefrom == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", closefilefrom);
		exit(100);
	}
	return (1);
}
