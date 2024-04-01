// Faça um programa que leia uma palavra (maximo de 50 letras) e some 1 no valor ASCII de cada caractere da palavra. Imprima a string resultante.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char str[51];

  printf("Digite uma palavra com no maximo 50 letras: \n");
  scanf("%s", str);

  for(int i = 0; str[i] != '\0'; i++)
  {
    str[i] = str[i] + 1;
  }
  printf("A string resultante eh: %s", str);

  return 0;
}