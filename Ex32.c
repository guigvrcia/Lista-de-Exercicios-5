#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char data[11];
  int dia, mes, ano;
  int verifica;

  printf("Digite uma data: \n");
  fgets(data, 11, stdin);

  verifica = sscanf(data, "%d/%d/%d", &dia, &mes, &ano);

  if(verifica == 3 && data[2] == '/' && data[5] == '/' && strlen(data) == 10) {
    printf("Dia: %d\n", dia);
    printf("Mes: %d\n", mes);
    printf("Ano: %d\n", ano);
  } else {
    printf("Data invalida.\n");
  }

  return 0;

}