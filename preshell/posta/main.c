#include "holberton.h"
char **lsh_split_line(char *line);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int pedircomando(void);
/**
 * main - simple command interpreter
 * Return: 0;
 */
int main(void)
{
	while (1)
	{
		write(1, "$ ", 2);
		if (pedircomando() == 0)
			exit(0);
	}
	return (0);
}
/**
 * pedircomando - ask command
 */
int pedircomando(void)
{
	size_t buffsize = 0, len;
	char *buffer = NULL, **argv;
	pid_t child_pid;
	int status;

	/** write(1, "$ ", 2);*/
	len = getline(&buffer, &buffsize, stdin);
	if (len == -1)
	{
		if (len == EOF)
		{
			return (0);
		}
		perror("");
	}
	buffer[len - 1] = '\0';
	/*printf("----%s----", buffer);*/
	if (strcmp(buffer, "exit") == 0)
	{
	return 0;
	}
	argv = lsh_split_line(buffer);
	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error:");
	}
	if (child_pid == 0)
	{
		if (execve(argv[0], argv, NULL) == -1)
		{
			perror("Error");
		}
	}
	else
	{
		wait(&status);
	}
	return 1;
}



char **lsh_split_line(char *line)
{
	unsigned int bufsize = 64, i = 0;
	char **tokens = malloc(bufsize * sizeof(char*));
	char *token;

	if (!tokens)
	{
		perror("Error");
		return (NULL);
	}
	token = strtok(line, " ");
	while (token != NULL)
	{
		tokens[i] = token;
		i++;
		if (i >= bufsize)
		{
			bufsize += 64;
			tokens = _realloc(tokens, (bufsize - 64) * sizeof(char*), bufsize * sizeof(char*));
			if (!tokens)
			{
				perror("Error");
				return (NULL);
			}
		}
		token = strtok(NULL, " ");
	}
	tokens[i] = NULL;
	return (tokens);
}

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (old_size == new_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size < old_size)
	{
		free(ptr);
	}
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
