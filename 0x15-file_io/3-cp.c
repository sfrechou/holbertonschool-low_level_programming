#include "holberton.h"

void close_all(int i);

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
	int filefrom, fileto, rd = 1, wr;
	char *buff;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fileto = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 00664);
        if (fileto == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
                exit(99);
        }
	filefrom = open(av[1], O_RDONLY);
	if (filefrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
		return (0);
	while (rd > 0)
	{
		rd = read(filefrom, buff, 1024);
		if (rd == -1)
		{
			free(buff);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		if (rd > 0)
		{
			wr = write(fileto, buff, rd);
			if (wr == -1)
			{
				free(buff);
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
				exit(99);
			}
		}
	}
	free(buff);
	close_all(fileto);
	close_all(filefrom);
	return (0);
}

/**
 * close_all - function that prints a list
 * @i: file to read and write
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void close_all(int i)
{
	int closeto;

	closeto = close(i);
	if (closeto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", i);
		exit(100);
	}
}
