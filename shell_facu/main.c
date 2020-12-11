#include "holberton.h"
/**
 * main - Entry point
 * @ac: ac
 * @av: av
 * @env: environment variables
 * Return: void;
 */
int main(int ac, char **av, char **env)
{
	char *buffer = NULL;
	char **args = NULL;
	int built_in = 0;
	char *path = NULL;
	(void)ac;
	(void)av;

	signal(SIGINT, controlcfun);

	while (1)
	{
		if (isatty(STDIN_FILENO))
		{
			prompt_0();
		}
		buffer = getline_1();
		if (space_check(buffer) != 0 && buffer[0] != '\0')
		{
			args = split_line_2(buffer);
			built_in = find_built_in_3(args, env, buffer);
			if (built_in == 0)
			{
				continue;
			}
			if (args[0][0] != '/' && args[0][0] != '.')
			{
				path = getpath_4(args[0], env);
				if (path == NULL)
				{
					free(buffer);
					free(args);
					continue;
				}
				execute_5(path, args, env);
				free(path);
			}
			else
			{
				if (dir_check(args[0]) == 1)
				{
					free(buffer);
					free(args);
					continue;
				}
				path = args[0];
				execute_5(path, args, env);
			}
			free(buffer);
		}
		else
		{
			free(buffer);
			continue;
		}
	}
	return (0);
}
