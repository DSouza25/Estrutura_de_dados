#include <stdio.h>

int main(){
    int vector[10] = {0,1,2,3,4,5,6,7,8,9};
    int soma = 0;
    for (size_t i = 0; i < sizeof(vector)/sizeof(vector[0]); i++)
    {
        printf("Elemento %d: %d\n", i,vector[i]);
        soma += vector[i];
    }
    printf("A soma de todos os valores do vetor eh: %d", soma);
    
    return 0;
}