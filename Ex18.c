// Faça um programa em que troque todas as ocorrencias de uma letra L1 pela letra L2 em uma string. A string e as letras L1 e L2 devem ser fornecidas pelo usuario.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char str[50], l1, l2;

  printf("Digite uma string: \n");
  fgets(str, 50, stdin);

  printf("Digite uma letra: \n");
  scanf(" %c", &l1);

  printf("Digite outra letra: \n");
  scanf(" %c", &l2);

  for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == l1)
        {
            str[i] = l2;
        }
    }
  printf("A string trocando todas as ocorrencias de L1 e L2 eh: %s", str);

  return 0;
}