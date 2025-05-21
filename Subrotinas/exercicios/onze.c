// Crie uma função 'somaArray' que recebe um array de inteiros e seu tamanho, retornando a soma dos elementos.

#include <stdio.h>
#include <stdlib.h>

int somaArray(int *inteiros, int tamanho){
    int soma = 0;
    for (int i = 0; i < tamanho; i++)
    {
        soma += inteiros[i];
    }

    return soma;
}


int main(){
    int *numeros[] = {1, 2, 3, 4, 5};

    printf("%d", somaArray(&numeros, 5));
    
    return 0;
}