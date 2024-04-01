/*Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui essa palavra. 
Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada por esse caractere.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char str[200];
  char c;
  int cont = 0;
  
  //Recebe a palavra:
  printf("Digite uma palavra: \n");
  scanf("%s", str);

  printf("Digite um caractere: \n");
  scanf(" %c", &c);

  //Calcula quantas vogais a palavra possui e substitui as vogais pelo caractere digitado;
  for(int i =0; str[i] != '\0'; i++)
  {
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == '\0' || str[i] == '\n')
    {
      str[i] = c;
      cont++;
    }
  }
  printf("A palavra possui %d vogais. \n", cont);
  printf("A palavra com a substituicao pelo caractere fica: %s\n", str);

  return 0;

}