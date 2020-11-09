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
	int fileto, filefrom, rd, closeto,  closefrom, wr;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fileto = open(av[2], O_CREAT | O_TRUNC | O_RDWR, 00664);
	filefrom = open(av[1], O_RDONLY);
	rd = read(filefrom, buf, 1023);
	if (filefrom == -1 || rd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	wr = write(fileto, buf, rd);
	if (fileto == -1 || wr == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", av[2]);
		exit(99);
	}
	closeto = close(fileto);
	closefrom = close(filefrom);
	if (closeto == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fileto);
		exit(100);
	}
	if (closefrom == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", filefrom);
		exit(100);
	}
	return (0);
}
