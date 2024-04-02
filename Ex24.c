/*Escreva um programa que recebe do usuario uma string S, um caractere C, e uma posição I e devolve o ındice da primeira posiçao da string onde foi encontrado o caractere C. A procura deve começar a partir da posiçao I.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char str[30];
  char C;
  int I;

  printf("Digite uma string: \n");
  fgets(str, 30, stdin);

  printf("Digite um caractere: \n");
  scanf(" %c", &C);

  printf("Digite a posicao I: \n");
  scanf("%d", &I);

  for(int i = I; i < strlen(str); i++)
  {
    if(str[i] == C)
    {
      printf("O caractere que %c voce digitou foi encontrado na posicao %d\n", C, i);
      return 0;
    }
  }
  printf("O caractere %c nao foi encontrado na posicao digitada.", C);

  return 0;

}