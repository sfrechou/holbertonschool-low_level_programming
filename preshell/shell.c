#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>

void start(void);
int run_prompt(void);
int execute(char *token);

int main(int argc, char **argv)
{
	start();
	(void)argc;
	(void)**argv;
	return (0);
}

void start(void)
{
	run_prompt();
}

int run_prompt(void)
{
	char *prompt = "$ ";
	char *User_line = NULL;
	size_t line_size = 0;
	int characters = 0;
	char *token;

	User_line = (char *)malloc(line_size);

	while (1)
	{
		write(STDOUT_FILENO, prompt, 2);
		characters = getline(&User_line, &line_size, stdin);
		token = strtok(User_line, " ");
		while (token != NULL)
		{
			printf("%s\n", token);
			execute(token);
			token = strtok(NULL, " ");
		}
	}
	free(User_line);
	return (characters);
}

int execute(char *token)
{

	pid_t child_pid;
	int status;

	child_pid = fork();
	if (child_pid == 0)
	{
		execve("/bin/ls", token, NULL);
	}
	else
	{
		wait(&status);
	}
	return (0);
}
