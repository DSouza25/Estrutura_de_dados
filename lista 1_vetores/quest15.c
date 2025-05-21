#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor1[] = {1,2,3};
    int vetor2[] = {4,5,6};
    int vetor3[sizeof(vetor1)/sizeof(vetor1[0]) + sizeof(vetor2)/sizeof(vetor2[0])];

    for (unsigned i = 0; i < sizeof(vetor3)/sizeof(vetor3[0]) ; i++)
    {
        if (i<sizeof(vetor1)/sizeof(vetor1[0]))
        {
            vetor3[i] = vetor1[i];
        }else{
            vetor3[i] = vetor2[i-3];
        }
        
    }

    for (unsigned int k = 0; k < sizeof(vetor3)/sizeof(vetor3[0]); k++)
    {
        printf("%d ", vetor3[k]);
    }
    
    return 0;
}