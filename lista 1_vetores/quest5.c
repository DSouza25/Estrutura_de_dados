#include <stdio.h>

int main(){
    int vector[10] = {0,1,2,3,4,5,6,7,8,9};
    printf("Vetor: [");
    int count = 0;
    for (size_t i = 0; i < sizeof(vector)/sizeof(vector[0]); i++)
    {
        printf(" %d,",vector[i]);
        if ((vector[i]%2 == 0)&&(vector[i]!=0))
        {
            count++;
        }
        
    }
    printf("]");
    printf("\nA quantidade de numeros pares eh: %d", count);
    return 0;
}