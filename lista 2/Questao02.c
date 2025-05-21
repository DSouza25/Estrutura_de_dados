// 2. Leia uma matriz 4x4 e calcule a soma de todos os seus elementos.

#include <stdio.h>

int main() {
    int m[4][4], soma = 0;
    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++) {
            scanf("%d", &m[i][j]);
            soma += m[i][j];
        }

    printf("Soma dos elementos: %d\n", soma);
    return 0;
}
