/*Faça um programa que preencha uma matriz de string com os modelos de cinco carros. (exemplos de modelos: Fusca, Gol, Vectra, etc.). 
Em seguida, preencha um vetor com o consumo desses carros, isto e, quantos quilometros cada um deles faz com um litro de combustıvel. 
Calcule e mostre:
(a) O modelo de carro mais economico;
(b) Quantos litros de combust´ıvel cada um dos carros cadastrados consome para percorrer uma distancia de 1.000 quil ˆ ometros.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char carros[5][20];
  float consumo[5];
  int i, menorconsumo = 0;

  for (i = 0; i < 5; i++)
  {
    printf("Digite o modelo do carro desejado: \n");
    scanf("%s", carros[i]);

    printf("Digite o consumo do carro: \n");
    scanf("%f", &consumo[i]);
  }
  for(i = 1; i < 5; i++)
  {
    if(consumo[i] < consumo[menorconsumo])
    {
      menorconsumo = i;
    }
  }
  printf("O carro mais economico eh: %s\n", carros[menorconsumo]);

  for(i = 0; i < 5; i++)
  {
    printf("O carro %s consome %.2f litros por km/h\n", carros[i], consumo[i]);
  }
  return 0;
}