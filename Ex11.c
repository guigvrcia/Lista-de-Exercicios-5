// Faça um programa que receba do usuario uma string. O programa imprime a string sem suas vogais.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char str[100];

  printf("Digite uma palavra: \n");
  fgets(str, 100, stdin);

  printf("A palavra digitada sem vogais fica: \n");
  for (int i = 0; str[i] != '\0'; i++)
  {
    if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U')
    {
      printf("%c", str[i]);
    }
  }
  return 0;
}