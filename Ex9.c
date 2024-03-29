// Escreva um programa que substitui as ocorrencias de um caractere ‘0’ em uma string por outro caractere ‘1’

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char str[200] = "011001011001011001011001011001011001011001";
  int i = 0;

  for(i = 0; str[i] != '\0'; i++)
  {
    if(str[i] == '0')
    {
      str[i] = '1';
    }
  }
  printf("%s\n", str);
  return 0;
}