// 14. Crie uma matriz identidade 4x4 e imprima seus valores.

#include <stdio.h>

int main() {
    int m[4][4];
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            m[i][j] = (i == j) ? 1 : 0;

    printf("Matriz identidade:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
    return 0;
}
