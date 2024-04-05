#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
  char str1[21], str2[21];
  char menu;
  char C1, C2;

  printf("Selecione uma dentre as opcoes do menu: \n");
  printf("A - Ler uma string S1 (tamanho maximo 20 caracteres); \n");
  printf("B - Imprimir o tamanho da S1; \n");
  printf("C - Comparar a string S1 com uma nova string S2 fornecida pelo usuario e imprimir o resultado da comparacao; \n");
  printf("D - Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenacao: \n");
  printf("E - Imprimir a string S1 de forma reversa; \n");
  printf("F - Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse ser informado pelo usuario; \n");
  printf("G - Substituir a primeira ocorrencia do caractere C1 da string S1 pelo caractere C2. Os caracteres C1 e C2 serao lidos pelo usuario; \n");
  printf("H - Verificar se uma string S2 e substring de S1. A string S2 deve ser informada pelo usuario; \n");
  printf("I - Retornar uma substring da string S1. Para isso o usuario deve informar a partir de qual posicao deve ser criada a substring e qual eh o tamanho da substring; \n");
  printf("Digite a opcao desejada: \n");
  scanf(" %c", &menu);
  getchar();

  switch (menu) {
    case 'A':
    printf("Digite uma string de ate 20 caracteres: \n");
    fgets(str1, 21, stdin);
    printf("String digitada: %s\n", str1);
    break;

    case 'B':
    printf("Digite uma string de ate 20 caracteres: \n");
    fgets(str1, 21, stdin);
    printf("O tamanho da string digitada eh: %d", strlen(str1));
    break;

    case 'C':
    printf("Digite uma string1 de ate 20 caracteres: \n");
    fgets(str1, 21, stdin);

    printf("Digite uma string2 de ate 20 caracteres: \n");
    fgets(str2, 21, stdin);

    int comp = strcmp(str1, str2);

    if (comp != 0) {
      printf("As strings sao iguais.\n");
    } else{
      printf("As string sao diferentes. \n");
    }
    break;

    case 'D':
    printf("Digite uma string1 de ate 20 caracteres: \n");
    fgets(str1, 21, stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Digite uma string2 de ate 20 caracteres: \n");
    fgets(str2, 20, stdin);
    str2[strcspn(str2, "\n")] = '\0';

    strcat(str1, str2);

    printf("O resultado da string concatenada eh: %s\n", str1);
    break;

    case 'E':
    printf("Digite uma string de ate 20 caracteres: \n");
    fgets(str1, 21, stdin);
      for(int i = strlen(str1) - 1; i >= 0; i--) {
         printf("%c", str1[i]);
      }
    break;

    case 'F':
    printf("Digite uma string de ate 20 caracteres: \n");
    fgets(str1, 21, stdin);
    printf("A string digitada possui %d caracteres. \n", strlen(str1));
    break;

    case 'G':
    printf("Digite uma string de ate 20 caracteres: \n");
    fgets(str1, 21, stdin);

    printf("Agora digite um caractere C1: \n");
    scanf(" %c", &C1);

    printf("Digite outro caractere C2: \n");
    scanf(" %c", &C2);
    str1[strcspn(str1, "\n")] = '\0';
        for (int i = 0; str1[i]; i++) {
          if(str1[i] == C1) {
            str1[i] = C2;
          }
        }
    printf("A string modificada pelas substicoes de caractere C1 por C2 eh: %s\n", str1);
    break;

    case 'H':
    printf("Digite uma string de ate 20 caracteres: \n");
    fgets(str1, 21, stdin);

    printf("Digite outra string de ate 20 caracteres: \n");
    fgets(str2, 21, stdin);

    if (strstr(str1, str2) != NULL) {
      printf("A string2 eh substring da string1. \n");
    } else {
      printf("A string2 nao eh substring da string1. \n");
    }
    break;
  }
  return 0;
}
