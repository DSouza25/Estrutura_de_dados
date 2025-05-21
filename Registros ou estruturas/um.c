// Crie uma estrutura Pessoa com nome (string), idade (int) e altura (float). Leia os dados de uma pessoa e exiba-os.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    struct Pessoa
    {
        char nome[50];
        int idade;
        float altura;
    }pessoa1;
    printf("Digite seu nome: ");
    fgets(pessoa1.nome, sizeof(pessoa1.nome), stdin);
    pessoa1.nome[strcspn(pessoa1.nome, "\n")] = '\0';
    printf("Digite sua idade: ");
    scanf("%d", &pessoa1.idade);
    printf("Digite sua altura: ");
    scanf("%f", &pessoa1.altura);
    system("cls");

    printf("Ola, %s! Voce tem %d anos e sua altura eh %.2f.", pessoa1.nome, pessoa1.idade, pessoa1.altura);

    return 0; 
}