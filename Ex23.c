/* Escreva um programa que recebe uma string S e inteiros nao-negativos I e J e imprima o segmento S[I..J].*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char S[100];
  int I, J;

  printf("Digite a string em S: ");
  fgets(S, 100, stdin);

  do {
  printf("Digite um numero inteiro I: \n");
  scanf("%d", &I);
  } while (I < 0);

  do {
  printf("Digite outro numero inteiro J: \n");
  scanf("%d", &J);
  } while (J < 0);

  printf("Impressao do segmento S[I...J]: \n");
  for(int i = I; i <= J; i++)
  {
    printf("%c", S[i]);
  }
  printf("\n");

  return 0;
}