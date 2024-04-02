/*O codigo de Cesar é uma das mais simples e conhecidas teecnicas de criptografia. É um tipo de substituicao na qual cada letra do texto e substituıda por outra, que se apresenta no alfabeto abaixo dela um numero fixo de vezes. Por exemplo, com uma troca de tres posições, ‘A’ seria substituıdo por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante. Implemente um programa que faça uso desse Codigo de Cesar (3 posiçoes), entre com uma string e retorne a string codificada. Exemplo:
String: a ligeira raposa marrom saltou sobre o cachorro cansado
Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char str[380];

  printf("Digite uma string para codifica-la: \n");
  fgets(str, 300, stdin);

  for(int i = 0; strlen(str) > i; i++)
  {
    if(str[i] == 'A' || str[i] == 'a')
    {
      str[i] = 'D';
    }
    if(str[i] == 'e' || str[i] == 'E')
    {
      str[i] = 'B';
    }
    if(str[i] == 'o' || str[i] == 'O')
    {
      str[i] = 'C';
    }
  }
  printf("%s", str);

  return 0;
}