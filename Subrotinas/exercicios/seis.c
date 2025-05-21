// Escreva uma função 'potencia' que recebe uma base e um expoente e retorna o resultado da potenciação.

#include <stdio.h>
#include <stdlib.h>

int potencia(int base, int expoente){
    int resultado = 1;
    for (int i = 0; i < expoente; i++)
    {
        resultado *= base;
    }
    return resultado;
}

int main(){

    printf("%d", potencia(2,3));
    return 0;
}