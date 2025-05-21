// 3. Leia uma matriz 3x3 e calcule a soma da diagonal principal.

#include <stdio.h>

int main() {
    int m[3][3], soma = 0;
    printf("Digite a matriz 3x3:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            scanf("%d", &m[i][j]);
            if (i == j)
                soma += m[i][j];
        }

    printf("Soma da diagonal principal: %d\n", soma);
    return 0;
}
