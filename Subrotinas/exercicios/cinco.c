// Crie um procedimento chamado 'tabuada' que recebe um inteiro e imprime sua tabuada de 1 a 10.

#include <stdio.h>
#include <stdlib.h>

void tabuada(int num){
    for (int i = 0; i < 10; i++)
    {
       printf("\n %d x %d = %d", num, i+1, num*(i+1));
    }
    
}

int main(){

    tabuada(5);
    return 0;
}