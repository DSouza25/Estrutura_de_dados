// Crie uma estrutura Ponto com coordenadas x e y (float). Leia dois pontos e calcule a distância entre eles.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    struct Ponto
    {
        float x, y;
    }ponto1, ponto2;
    float resultado, altura, distancia;
    system("cls");
    printf("Digite a coordenada X do ponto 1: ");
    scanf("%f", &ponto1.x);
    printf("Digite a coordenada Y do ponto 1: ");
    scanf("%f", &ponto1.y);
    printf("Digite a coordenada X do ponto 2: ");
    scanf("%f", &ponto2.x);
    printf("Digite a coordenada Y do ponto 2: ");
    scanf("%f", &ponto2.y);

    system("cls");
    distancia = ponto2.x - ponto1.x;
    if (distancia < 0) distancia = -distancia;
    altura = ponto2.y - ponto1.y;
    if (altura < 0) altura = -altura;
    resultado = sqrt(pow(altura, 2)+pow(distancia, 2));


    printf("A distancia entre os pontos eh de %.2f unidades\n\n", resultado);

    
    return 0;
}
