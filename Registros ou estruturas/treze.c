// Crie uma estrutura Polinomio que armazene os coeficientes de um polinômio de 2º grau. Calcule as raízes (use a fórmula de Bhaskara).

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Polinomio{
    int axx, bx, c;
};

int main(){

    struct Polinomio polinomio;
    float x1, x2, delta;

    printf("Sendo A*x^2 + B*x + C = 0, digite:\n");
    printf("O valor de A: ");
    scanf("%d", &polinomio.axx);
    printf("O valor de B: ");
    scanf("%d", &polinomio.bx);
    printf("O valor de C: ");
    scanf("%d", &polinomio.c);
    system("cls");

    delta = pow(polinomio.bx, 2) - 4*polinomio.axx*polinomio.c;

    x1 = (-polinomio.bx + sqrt(delta))/2*polinomio.axx;
    x2 = (-polinomio.bx - sqrt(delta))/2*polinomio.axx;

    printf("\nO valor das raizes sao:\nx1 = %.2f | x2 = %.2f\n\n", x1, x2);
    return 0;
}