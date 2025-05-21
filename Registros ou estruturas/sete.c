// Crie uma estrutura Circulo com raio (float). Calcule e exiba a área e a circunferência (use π = 3.14).

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    struct Circulo
    {
        float raio;
    }circulo;
    
    system("cls");
    printf("Digite o raio da circuferencia: ");
    scanf("%f", &circulo.raio);

    system("cls");
    printf("A area do circulo eh de %.2f\n", pow(circulo.raio, 2)*3.14);
    printf("A circunferencia do circulo eh de %.2f\n\n", 2*3.14*circulo.raio);
    return 0;
}