// 8. Leia uma matriz 3x3 e substitua todos os elementos negativos por zero.

#include <stdio.h>

int main() {
    int m[3][3];
    printf("Digite a matriz 3x3:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            scanf("%d", &m[i][j]);
            if (m[i][j] < 0)
                m[i][j] = 0;
        }

    printf("Matriz ajustada:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
    return 0;
}
