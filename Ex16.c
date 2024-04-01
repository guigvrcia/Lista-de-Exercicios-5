/*Leia uma cadeia de caracteres e converta todos os caracteres para maiuscula. 
Dica: subtraia 32 dos caracteres cujo codigo ASCII esta entre 97 e 122*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char str[30];

  printf("Digite uma cadeia de caracteres: \n");
  fgets(str, 30, stdin);

  for(size_t i = 0; i < strlen(str); i++)
  {
    if(str[i] >= 'a' && str[i] <= 'z')
    {
      str[i] = str[i] - 32;
    }
  }
  printf("A cadeira de caracteres convertida para minuscula fica: %s\n", str);

  return 0;
}