// 13. Leia uma matriz 3x3 e conte quantos elementos são pares.

#include <stdio.h>

int main() {
    int m[3][3], cont = 0;
    printf("Digite a matriz 3x3:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            scanf("%d", &m[i][j]);
            if (m[i][j] % 2 == 0)
                cont++;
        }

    printf("Quantidade de pares: %d\n", cont);
    return 0;
}
