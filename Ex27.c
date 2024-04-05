/* Faça um programa que, dada uma string, diga se ela e um palındromo ou nao. Lembrando que um palındromo é uma palavra que tenha a propriedade de poder ser lida tanto da direita para a esquerda como da esquerda para a direita. 

Exemplo:

ovo
arara
Socorram-me, subi no ^onibus em Marrocos.
Anotaram a data da maratona*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], str_clean[100];
    int i, j = 0, length;

    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    // Remove o caractere de nova linha da string
    str[strcspn(str, "\n")] = 0;

    // Remove todos os caracteres não alfabéticos e converte para minúsculo
    for (i = 0; str[i]; i++) {
        if (isalpha((unsigned char)str[i])) {
            str_clean[j++] = tolower((unsigned char)str[i]);
        }
    }
    str_clean[j] = '\0';

    // Verifica se a string é um palíndromo
    length = strlen(str_clean);
    for (i = 0; i < length / 2; i++) {
        if (str_clean[i] != str_clean[length - i - 1]) {
            printf("A string nao e um palindromo.\n");
            return 0;
        }
    }

    printf("A string e um palindromo.\n");

    return 0;
}