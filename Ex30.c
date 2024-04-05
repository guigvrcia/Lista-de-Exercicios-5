/*Leia duas cadeias de caracteres A e B. Determine quantas vezes a cadeia A ocorre na
cadeia B.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char cadeia1[100], cadeia2[100];
  int cont = 0, indice = 0;

  printf("Digite a cadeia de caracteres A: ");
  fgets(cadeia1, 100, stdin);
  for(int i = 0; i < 100; i++)
  {
    if(cadeia1[i] == '\n') {
      cadeia1[1] = '\0';
      break;
    }
  }

  printf("Digite a cadeia de caracteres B: ");
  fgets(cadeia2, 100, stdin);
  for(int i = 0; i < 100; i++)
  {
    if(cadeia2[i] == '\n') {
      cadeia2[i] = '\0';
      break;
    }
  }

  while(strstr(cadeia2 + indice, cadeia1) != NULL) {
    cont++;
    indice = (strstr(cadeia2 + indice, cadeia1) - cadeia2) + 1;
  }
  printf("A cadeia de caracteres A ocorro %d vezes na cadeia de caracteres B. \n", cont);

  return 0;

}