// Crie uma função 'ehPrimo' que recebe um número inteiro e retorna '1' se for primo e 0 caso contrário.

#include <stdio.h>
#include <stdlib.h>

int ehPrimo(int numero){
    int resultado = 0;
    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        {
            resultado++;
        }
    }
    if (resultado > 2)
    {
        return 0;
    }else{
        return 1;
    }
    
    
}

int main(){

    if (ehPrimo(7) == 1)
    {
        printf("Eh primo.");
    }else{
        printf("Nao eh primo.");
    }
    
    
    return 0;
}