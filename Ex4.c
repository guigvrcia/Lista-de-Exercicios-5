#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
  char str[5];

  printf("Digite o seu nome: \n");
  fgets(str, 5, stdin);

  printf("As 4 primeiras letras do nome sao: %s\n", str);

  return 0;
}