#include <stdio.h>

int main(){
    int vector[10] = {0,1,2,3,4,5,6,7,8,9};
    printf("Vetor: [");
    for (size_t i = 0; i < sizeof(vector)/sizeof(vector[0]); i++)
    {
        printf(" %d,",vector[i]);
    }
    printf("]");

    printf("\nVetor (x2): [");
    for (size_t i = 0; i < sizeof(vector)/sizeof(vector[0]); i++)
    {
        printf(" %d,",vector[i]*2);
    }
    printf("]");
    
    return 0;
}