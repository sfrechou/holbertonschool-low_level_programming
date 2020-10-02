#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{

int i;
int contador;
int letra;
char pass[100];
int resto;

i = 0;
contador = 0;
srand(time(NULL));

while (contador < 2645)
{
letra = (rand() % 26) + 97;
pass[i] = letra;
contador = contador + pass[i];
i++;
}

resto = 2772 - contador;
pass[i++] = resto;
pass[i++] = '\0';

printf("%s\n", pass);
}
