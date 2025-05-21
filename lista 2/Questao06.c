// 6. Leia uma matriz 5x5 e calcule a média de todos os elementos.

#include <stdio.h>

int main() {
    int m[5][5], soma = 0;
    printf("Digite a matriz 5x5:\n");
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++) {
            scanf("%d", &m[i][j]);
            soma += m[i][j];
        }

    float media = soma / 25.0;
    printf("Média dos elementos: %.2f\n", media);
    return 0;
}
