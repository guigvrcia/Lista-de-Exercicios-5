 /*Faça um programa que receba duas frases distintas e imprima de maneira invertida,trocando as letras A por '*' */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char str1[50];
  char str2[50];
  int i;

  printf("Digite a primeira frase: \n");
  fgets(str1, 50, stdin);

  printf("Digite a segunda frase: \n");
  fgets(str2, 50, stdin);

  printf("A primeira frase invertida com a substiuicao de caractere fica: \n");
  for(i = strlen(str1) - 2; i >= 0; i--)
  {
    if(str1[i] == 'A' || str1[i] == 'a')
    {
      printf("*");
    }
    else
    {
      printf("%c", str1[i]);
    }
  }
  printf("\n");

  printf("A segunda frase invertida com a substiuicao de caractere fica: \n");
  for(i = strlen(str2) - 2; i >= 0; i--)
  {
    if(str2[i] == 'A' || str2[i] == 'a')
    {
      printf("*");
    }
    else
    {
      printf("%c", str2[i]);
    }
  }
  return 0;
}