// 7. Crie um programa que leia uma matriz 4x3 e informe quantos valores são maiores que 10.

#include <stdio.h>

int main() {
    int m[4][3], cont = 0;
    printf("Digite a matriz 4x3:\n");
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 3; j++) {
            scanf("%d", &m[i][j]);
            if (m[i][j] > 10)
                cont++;
        }

    printf("Quantidade > 10: %d\n", cont);
    return 0;
}
