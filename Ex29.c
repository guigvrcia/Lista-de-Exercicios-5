/*Implemente um programa que leia duas strings, str1 e str2, e um valor inteiro positivo N. 
Concatene nao mais que N caracteres da string str2 a string str1 e termine str1 com‘\0’.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char str1[100], str2[100];
  int N;

  printf("Digite a primeira string: \n");
  fgets(str1, 100, stdin);
  for (int i = 0; i < 200; i++) {
    if (str1[i] == '\n') {
      str1[i] = '\0';
      break;
    }
  }

  printf("Digite a segunda string: \n");
  fgets(str2, 100, stdin);
  for (int i = 0; i < 200; i++) {
    if (str2[i] == '\n') {
      str2[i] = '\0';
      break;
    }
  }

  printf("Digite um numero inteiro positivo: \n");
  scanf("%d", &N);

  strncat(str1, str2, N);

  printf("\n");

  printf("A string concatenando nao mais que %d caracteres eh: %s\n", N, str1);

  return 0;
}