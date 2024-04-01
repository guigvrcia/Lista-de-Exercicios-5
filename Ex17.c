// Leia um vetor contendo letras de uma frase inclusive os espac¸os em branco. Retirar os espaços em branco do vetor e depois escrever o vetor resultante.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char str[200], semespaco[200];;
  int novastr = 0;

  printf("Digite um frase: \n");
  fgets(str, 100, stdin);

  for (int i = 0; str[i] != '\0'; i++)
  {
    if(str[i] != ' ')
    {
      semespaco[novastr] = str[i];
      novastr++;
    }
  }
  printf("A string sem espacos fica: %s\n", semespaco);

  return 0;
  
}