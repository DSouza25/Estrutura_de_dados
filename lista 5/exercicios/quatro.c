// Implemente uma funcção 'maior' que recebe dois numeros inteiros e retorna o maior deles

int maior(int a, int b){
    if (a >= b)
    {
        return a;
    }else{
        return b;
    }
    
}

#include <stdio.h>
#include <stdlib.h>

int main(){

    int numMaior = maior(52, 21);
    printf("%d", numMaior);
    return 0;
}