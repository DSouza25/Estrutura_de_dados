// 4. Leia uma matriz 3x3 e calcule a soma da diagonal secundária.

#include <stdio.h>

int main() {
    int m[3][3], soma = 0;
    printf("Digite a matriz 3x3:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            scanf("%d", &m[i][j]);
            if (i + j == 2)
                soma += m[i][j];
        }

    printf("Soma da diagonal secundária: %d\n", soma);
    return 0;
}
