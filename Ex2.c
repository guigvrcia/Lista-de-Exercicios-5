// Crie um programa que calcula o comprimento de uma string (nao use a funcao strlen).

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char str[20];
  int compri = 0;

  printf("Digite um pedaco de string: \n");
  fgets(str, 20, stdin);

  for (int i = 0; str[i] != '\0'; i++)
  {
    compri++;
  }
  printf("O comprimento da string digitada eh: %d\n", compri);

  return 0;
}
