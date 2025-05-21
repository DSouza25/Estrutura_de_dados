// 12. Crie um programa que leia uma matriz 3x4 e mostre a média de cada linha.

#include <stdio.h>

int main() {
    int m[3][4];
    printf("Digite a matriz 3x4:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            scanf("%d", &m[i][j]);

    for (int i = 0; i < 3; i++) {
        int soma = 0;
        for (int j = 0; j < 4; j++)
            soma += m[i][j];
        printf("Média da linha %d: %.2f\n", i, soma / 4.0);
    }
    return 0;
}
