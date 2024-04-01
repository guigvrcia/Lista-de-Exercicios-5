/* Escreva um programa para converter uma cadeia de caracteres de letras maiusculas em letras minusculas. 
Dica: some 32 dos caracteres cujo codigo ASCII esta entre 65 e 90. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char str[30];

  printf("Digite um string com varios caracteres de letras maiusculas para converter em minusculas: \n");
  fgets(str, 30, stdin);

  for(int i = 0; i < strlen(str); i++)
  {
    if(str[i] >= 'A' && str[i] <= 'Z')
    {
      str[i] = str[i] + 32;
    }
  }
  printf("A string convertida em letras minusculas eh: %s\n", str);

  return 0;
}