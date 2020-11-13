#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
size_t prompt (char *pbuffer);
int read_buffer(char *buffer, char pav[][]);

int main(void)
{
	char *buffer = NULL;
	size_t buffsize = 1024;
	char *pbuffer = &buffer;

	buffer = malloc(sizeof(char) * buffsize);
	while (1)
	{
		prompt(pbuffer);
		read_buffer(buffer, pav[][]);
		if (read_buffer)
		{
			procer = fork();
			if (procer == -1)
				perror("Error\n");
			if (procer > 0)
				wait();
			if (procer == 0)
			{
				execve();
			}
		}
	}
}
