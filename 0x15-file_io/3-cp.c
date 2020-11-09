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
	int fileto, filefrom, rd = 1, closeto,  closefrom, wr;
	char *buff = malloc(1024 * sizeof(char));

	if (buff == NULL)
		return (0);
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fileto = open(av[2], O_CREAT | O_TRUNC | O_RDWR, 00664);
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
	while (rd > 0)
	{
		rd = read(filefrom, buff, 1024);
		if (rd == -1)
		{
			free(buff);
			dprintf(2, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		if (rd > 0)
		{
			wr = write(fileto, buff, rd);
			if (wr == -1)
			{
				free(buff);
				dprintf(2, "Error: Can't write to file %s\n", av[2]);
				exit(99);
			}
		}
	}
	free(buff);
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
