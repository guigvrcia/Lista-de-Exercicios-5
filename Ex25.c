/*Escreva um programa que leia duas palavras e diga qual deles vem primeiro na ordem alfabetica.
Dica: ‘a’ e menor do que ‘b’.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char palavra1[50], palavra2[50];
  int comp;

  printf("Digite a primeira palavra: \n");
  fgets(palavra1, 50, stdin);

  printf("Agora, digite a segunda palavra: \n");
  fgets(palavra2, 50, stdin);

  comp = strcmp(palavra1, palavra2);

  if(comp < 0)
  {
    printf("Na ordem alfabetica, a primeira palavra %s vem antes da segunda %s. \n", palavra1, palavra2);
  }
  else
  {
    printf("Na ordem alfabetica, a segunda palavra %s vem antes da primeira palavra %s.\n", palavra2, palavra1);
  }

  return 0;
}