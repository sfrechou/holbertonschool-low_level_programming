#include <stdio.h>
#include <string.h>

int main()
{
	char hola[100] = "HO jok kaka uhhh sns kdddd yeeed jejej";
	char* token = strtok(hola, " ");

	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}
	return (0);
}
