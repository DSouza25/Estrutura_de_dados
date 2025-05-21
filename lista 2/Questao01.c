// 1. Faça um programa que leia uma matriz de 3 x 3 elementos usando comandos de repetição, multiplique cada elemento por 5 e imprime o resultado.

#include <stdio.h>

int main() {
    int m[3][3];
    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            scanf("%d", &m[i][j]);
            m[i][j] *= 5;
        }

    printf("Matriz multiplicada por 5:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
    return 0;
}
