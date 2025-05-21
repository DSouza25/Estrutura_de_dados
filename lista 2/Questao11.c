// 11.  Faça um programa que leia uma matriz 3x3 e encontre o maior elemento.

#include <stdio.h>

int main() {
    int m[3][3], maior;
    printf("Digite a matriz 3x3:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            scanf("%d", &m[i][j]);
            if (i == 0 && j == 0 || m[i][j] > maior)
                maior = m[i][j];
        }

    printf("Maior elemento: %d\n", maior);
    return 0;
}
