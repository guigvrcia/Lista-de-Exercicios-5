// Crie um programa que compara duas strings (nao use a funcao strcmp).

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char str1[100];
  char str2[100];

  printf("Digite a primeira string: \n");
  fgets(str1, 100, stdin);

  printf("Digite a segunda string: \n");
  fgets(str2, 100, stdin);

  if (strlen(str1) > strlen(str2))
  {
    printf("A primeira string digitada eh maior que a segunda. \n");
  }
  else if (strlen(str1) < (strlen(str2)))
  {
    printf("A segunda string digitada eh maior que a primeira. \n");
  }
  else
  {
    printf("As duas strings digitadas sao iguais. \n");
  }
  return 0;
}