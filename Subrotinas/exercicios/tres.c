// Desenvolva uma função 'soma' que recebe dois números inteiros e retorna a soma deles.

#include <stdio.h>
#include <stdlib.h>

int soma(int a, int b){
    return a + b;
}

int main(){
    int resultado = soma(1, 4);
    printf("%d", resultado);
    return 0;
}