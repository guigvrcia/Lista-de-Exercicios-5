#include <stdio.h>

int main()
{
    char nome[15];
    int idade, i;

    for(int i = 0; i < 10; i++)
    {
        printf("Digite o seu primeiro nome: ");
        fgets(nome, 15, stdin);

        printf("Agora digite a sua idade: ");
        scanf("%d", &idade);
        while(getchar() != '\n');
    if(idade < 0)
    {
      printf("Idade digitada é negativa, portanto, invalida. \n");
      break;
    }
    }
    for(i = 0; i < 10; i++)
    {
      printf("O nome da %d pessoa eh: %s e sua idade eh: %d\n", i+1, nome, idade);
    }

    return 0;
}