// 15. Leia uma matriz 5x2 e mostre quantos elementos estão entre 5 e 15.

#include <stdio.h>

int main() {
    int m[5][2], cont = 0;
    printf("Digite a matriz 5x2:\n");
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 2; j++) {
            scanf("%d", &m[i][j]);
            if (m[i][j] >= 5 && m[i][j] <= 15)
                cont++;
        }

    printf("Elementos entre 5 e 15: %d\n", cont);
    return 0;
}
