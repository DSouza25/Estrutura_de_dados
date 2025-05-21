// Crie uma estrutura Retangulo com largura e altura (float). Calcule e exiba a área e o perímetro.

#include <stdio.h>
#include <stdlib.h>

int main(){
    struct Retangulo
    {
        float largura;
        float altura;
    }retangulo1;
    
    printf("Digite a largura do retangulo(m): ");
    scanf("%f", &retangulo1.largura);
    printf("Digite a altura do retangulo(m): ");
    scanf("%f", &retangulo1.altura);

    system("cls");
    printf("A area do retangulo eh: %.2f metros quadrados\n\n", retangulo1.largura*retangulo1.altura);

    return 0;
}