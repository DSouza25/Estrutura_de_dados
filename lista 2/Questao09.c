// 9. Leia duas matrizes 3x3 e calcule a matriz soma.

#include <stdio.h>

int main() {
    int a[3][3], b[3][3], soma[3][3];
    printf("Digite a matriz A:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    printf("Digite a matriz B:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
            soma[i][j] = a[i][j] + b[i][j];
        }

    printf("Matriz soma:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", soma[i][j]);
        printf("\n");
    }
    return 0;
}
