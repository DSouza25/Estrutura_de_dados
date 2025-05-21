#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[] = {1,2,3,4,5};
    int elemento = 3;
    int posicao;

    for (unsigned int i = 0; i < sizeof(vetor)/sizeof(vetor[0]); i++)
    {
        if (vetor[i] == elemento)
        {
            posicao = i+1;
        }
    }
    printf("%d", posicao); 
    return 0;
}