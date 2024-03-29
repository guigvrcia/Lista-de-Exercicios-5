// Entre com um nome e imprima o nome somente se a primeira letra do nome for ‘a’ (maiuscula ou minuscula).

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char name[20];

  printf("Digite o seu nome: \n");
  fgets(name, 20, stdin);

  if (name[0] == 'a' || name[0] == 'A')
  {
    printf("O nome digitado eh: %s\n", name);
  }
  else
  {
    printf("O nome nao comeca com a letra 'A', portanto, nao eh valido.\n");
  }

  return 0;
}