// Crie uma estrutura Triangulo com 3 lados (float). Verifique se os lados formam um triângulo válido e, se sim, calcule seu perímetro.

#include <stdio.h>
#include <stdlib.h>

int main(){
    struct Triangulo
    {
        float l1, l2, l3;
    }triangulo;

    system("cls");
    printf("Digite o tamanho do primeiro lado do triangulo: ");
    scanf("%f", &triangulo.l1);
    printf("Digite o tamanho do segundo lado do triangulo: ");
    scanf("%f", &triangulo.l2);
    printf("Digite o tamanho do terceiro lado do triangulo: ");
    scanf("%f", &triangulo.l3);
    system("cls");

    if ((triangulo.l1+triangulo.l2 > triangulo.l3) && (triangulo.l3+triangulo.l2 > triangulo.l1) && (triangulo.l1+triangulo.l3 > triangulo.l2))
    {
        printf("O triangulo citado tem perimetro igual a %.2f", triangulo.l1+triangulo.l2+triangulo.l3);
    }else{
        printf("Nao eh um triangulo...");
    }
    
    return 0;
}