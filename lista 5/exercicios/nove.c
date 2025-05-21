// Desenvolva uma função 'calculaMedia' que recebe três notas e retorna a média aritmética.

#include <stdio.h>
#include <stdlib.h>

float calculaMedia(int nota1, int nota2, int nota3){
    return (nota1 + nota2 + nota3)/3;
}

int main(){

    printf("media: %.2f", calculaMedia(10, 8, 9));
    return 0;
}