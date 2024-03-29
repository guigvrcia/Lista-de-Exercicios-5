#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
  char name[200];
  int quant = 0;

  printf("Digite um nome qualquer: \n");
  fgets(name, 200, stdin);

  for (int i = 0; name[i] != '\0'; i++)
  {
    if (isalpha(name[i])) {
    quant++;
    }
  }
  printf("O nome digitado possui %d quantidade de letras.\n", quant - 1);

  return 0;
}