// Faca um programa que receba uma palavra e a imprima de tras-para-frente

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char str[20];

  printf("Digite uma palavra para ser impressa ao contrario: \n");
  fgets(str, 20, stdin);

  for(int i = strlen(str) - 1; i >= 0; i--)
  {
    printf("%c", str[i]);
  }
  return 0;
}