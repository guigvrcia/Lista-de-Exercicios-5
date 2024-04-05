/*Construa um programa que leia duas strings fornecidas pelo usuario e verifique se a segunda string lida esta contida no final da primeira, retornando o resultado da verificaçao.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char str1[100], str2[100];
  int tam1, tam2, i;

  printf("Digite a primeira string: \n");
  fgets(str1, 100, stdin);
  for (i = 0; i < 100; i++)
  {
    if(str1[i] == '\n')
    {
      str1[i] = '\0';
      break;
    }
  }
  printf("Digite a segunda string: \n");
  fgets(str2, 100, stdin);
  for (i = 0; i < 100; i++)
  if (str2[i] == '\n')
  {
    str2[i] = '\0';
  }

  tam1 = strlen(str1);
  tam2 = strlen(str2);

  if (tam2 > tam1)
  {
    printf("A segunda string esta contida no final da primeira string. \n");
    return 0;
  }

  if(strcmp(&str1[tam1 - tam2], str2) == 0)
  {
    printf("A segunda string esta contida no final da primeira string. \n");
  }
  else
  {
    printf("A segunda string nao esta contida no final da primeira string. \n");
  }

  return 0;
}