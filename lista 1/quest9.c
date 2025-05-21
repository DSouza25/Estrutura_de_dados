#include <stdio.h>

int main(){
    int vector[10] = {0,1,2,3,4,5,6,7,8,9};
    int result = 1;
    for (size_t i = 0; i < sizeof(vector)/sizeof(vector[0]); i++)
    {
        printf("Elemento %d: %d\n", i,vector[i]);
        result = result * vector[i];
    }
    printf("O produto de todos os valores do vetor eh: %d", result);
    
    return 0;
}