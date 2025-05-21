// 5. Crie um programa que mostre qual linha da matriz possui a maior soma de elementos.

#include <stdio.h>

int main() {
    int m[3][3], maior_soma = 0, linha_maior = 0;
    printf("Digite a matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        int soma = 0;
        for (int j = 0; j < 3; j++) {
            scanf("%d", &m[i][j]);
            soma += m[i][j];
        }
        if (i == 0 || soma > maior_soma) {
            maior_soma = soma;
            linha_maior = i;
        }
    }
    printf("Linha com maior soma: %d (soma = %d)\n", linha_maior, maior_soma);
    return 0;
}
