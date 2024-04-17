#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char nome[10];
  char resultado[5]; 

  printf("Digite o seu nome: ");
  scanf("%s", nome);

  for (int i = 0; i < 4 && nome[i] != '\0'; i++) {
    resultado[i] = nome[i];
  }
  resultado[4] = '\0';
  printf("O resultado eh: %s\n", resultado);
}
