#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *buffer = NULL;
	size_t bufsize = 0;
	int characters;

	printf("$ ");
	characters = getline(&buffer,&bufsize,stdin);
	printf("%s",buffer);

	if (characters == -1)
	{
		return (-1);
	}

	return(characters - 1);
}
