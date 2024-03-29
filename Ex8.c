// Faca um programa que conte o numero de 1’s que aparecem em um string. Exemplo: ´“0011001” -> 3

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char str[200] = "100111";
  int i = 0;
  int count = 0;

  for (i = 0; str[i] != '\0'; i++)
  {
    if(str[i] == '1')
    {
      count++;
    }
  }
  printf("O caractere '1' aparece %d vezes na string.\n", count);
  return 0;
}