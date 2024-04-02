/*Ler o nome e o valor de uma determinada mercadoria de uma loja.
Sabendo que o desconto para pagamento a vista é de 10% sobre o valor total, calcular o valor a ser pago a vista. 
Escrever o nome da mercadoria, o valor total, o valor do desconto e o valor a ser pago a vista. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char mercadoria[100];
  float preco, pagavista, desconto;

  printf("Digite o nome de uma mercadoria da loja: \n");
  fgets(mercadoria, 100, stdin);

  printf("Digite o preco desta mercadoria: \n");
  scanf("%f", &preco);

  pagavista = preco - (preco * 0.1);
  desconto = preco - pagavista;

  printf("\n A mercadoria escolhida foi: %s Seu valor: %.2f reais.\n Com desconto, o preco final sera de %.2f reais.\n O valor do desconto dado foi de: %.2f reais.", mercadoria, preco, pagavista, desconto);

  return 0;

}