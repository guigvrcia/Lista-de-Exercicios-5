//Ler uma frase e contar quantos caracteres sao espac¸os em brancos. Lembre-se que uma frase e um conjunto de caracteres (vetor).

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
  char str[200];
  int cont = 0;

  printf("Digite uma frase: \n");
  fgets(str, 100, stdin);

  for(int i = 0; str[i] != '\0'; i++)
  {
    if(str[i] == ' ')
    {
      cont++;
    }
  }
  printf("A frase digitada possui %d caracteres em branco. \n", cont);

  return 0;
}