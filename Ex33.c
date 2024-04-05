#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ALUNOS 5
#define NOME 50

int main()
{
  char alunes[ALUNOS][NOME];
  int num_alunos = 0;
  char continuar;

  do {
    printf("Digite o nome do aluno %d: ", num_alunos + 1);
    fgets(alunes[num_alunos], NOME, stdin);
    alunes[num_alunos][strcspn(alunes[num_alunos], "\n")] = '\0';

    num_alunos++;

    if (num_alunos < ALUNOS) {
      printf("Deseja continuar? 'S' para sim, 'N', para nao: \n");
      scanf("%c", &continuar);
      getchar();
    } else {
      break;
    }
  } while (continuar == 'S' || continuar == 's');

  char buscarnome[NOME];
  printf("Digite o nome do aluno que deseja saber se esta presente: \n");
  fgets(buscarnome, NOME, stdin);
  buscarnome[strcspn(buscarnome, "\n")] = '\0';

  int presente = 0;
  for(int i = 0; i < num_alunos; i++) {
    if (strstr(alunes[i], buscarnome) != NULL) {
      printf("O aluno %s esta presente na posicao %d da lista.\n", buscarnome, i + 1);
      presente = 1;
      break;
    }
  }
  if(!presente) {
    printf("O aluno %s nao esta presente na lista.\n", buscarnome);
  }
  return 0;
}