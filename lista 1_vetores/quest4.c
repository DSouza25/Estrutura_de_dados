#include <stdio.h>

int main(){
    int vector[10] = {0,1,2,3,4,5,6,7,8,9};
    printf("Vetor: [");
    int menor;
    for (size_t i = 0; i < sizeof(vector)/sizeof(vector[0]); i++)
    {
        printf(" %d,",vector[i]);
        if(i==0){
            menor = vector[i];
        }else{
            if(vector[i]<menor){
                menor = vector[i];
            }
        }
    }
    printf("]");
    printf("\nO menor valor do vetor eh: %d", menor);
    
    return 0;
}