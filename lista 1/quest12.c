#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[] = {5,3,6,8,9,7,2};
        for (unsigned int j = 0; j < sizeof(vetor)/sizeof(vetor[0]); j++)
        {
            for (unsigned int i = 0; i < sizeof(vetor)/sizeof(vetor[0]); i++)
            {
                if (vetor[i] < vetor[i+1])
                {
                    int aux = vetor[i];
                    vetor[i] = vetor[i+1];
                    vetor[i+1] = aux;
                }
            }
        }
        
        for (unsigned int i = 0; i < sizeof(vetor)/sizeof(vetor[0]); i++)
        {
            printf("%d -> ", vetor[i]);

        }

    return 0;
}