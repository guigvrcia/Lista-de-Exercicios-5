// Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25, imprime o nome da pessoa e a palavra “ACEITA”, caso contrario imprimir “NAO ACEITA”

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char nome[20];
  char sexo;
  int idade;

  printf("Digite o seu nome: \n");
  fgets(nome, 20, stdin);

  printf("Digite o seu sexo: \n");
  scanf("%c", &sexo);

  printf("Digite a sua idade: \n");
  scanf("%d", &idade);

  if(sexo == 'F' && idade < 25)
  {
    printf("\n%sESTA ACEITA!\n",nome);
  } else {
    printf("\nNAO ACEITA!\n");
  }
  return 0;
}