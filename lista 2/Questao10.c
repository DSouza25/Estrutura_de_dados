// 10.  Leia uma matriz 4x4 e mostre todos os elementos da diagonal principal e da secundária.

#include <stdio.h>

int main() {
    int m[4][4];
    printf("Digite a matriz 4x4:\n");
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            scanf("%d", &m[i][j]);

    printf("Diagonal principal: ");
    for (int i = 0; i < 4; i++) printf("%d ", m[i][i]);

    printf("\nDiagonal secundária: ");
    for (int i = 0; i < 4; i++) printf("%d ", m[i][3 - i]);

    printf("\n");
    return 0;
}
