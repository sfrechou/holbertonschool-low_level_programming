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
	char *buf [1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fileto = open(av[2], O_CREAT | O_TRUNC | O_RDWR, 0664);
	if (fileto == -1 || av[1] == NULL)
	{
		dprintf(2, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}
	filefrom = open(av[1], O_RDWR, 0664);
	if (filefrom == -1)
	{
		return (-1);
	}
	rd = read(filefrom, buf, 1024);
	write(fileto, buf, rd);
	return (1);
}
