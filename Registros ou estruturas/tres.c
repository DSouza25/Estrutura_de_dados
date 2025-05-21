// Crie uma estrutura Produto com nome (string), preço (float) e quantidade (int). Calcule e exiba o valor total em estoque (preço × quantidade).

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    struct Produto
    {
        char nome[50];
        float preco;
        int quantidade;
    }produto1;

    printf("Qual o nome do produto? ");
    fgets(produto1.nome, sizeof(produto1.nome), stdin);
    produto1.nome[strcspn(produto1.nome, "\n")] = '\0';
    printf("Digite o preco do produto: ");
    scanf("%f", &produto1.preco);
    printf("Digite a quantidade do produto: ");
    scanf("%d", &produto1.quantidade);
    system("cls");

    

    return 0;
}