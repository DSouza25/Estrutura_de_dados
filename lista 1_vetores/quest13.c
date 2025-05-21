#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[] = {1,2,3,3,3};
    int duplicado;
    for (unsigned int i = 0; i < sizeof(vetor)/sizeof(vetor[0]); i++)
    {   
        duplicado = 0;
        for (unsigned int j = 0; j <= i; j++)
        {
            if (vetor[i] == vetor[j] && j < i)
            {
                duplicado = 1;
            }
            
        }
        if (duplicado == 0)
        {
            printf("%d -> ", vetor[i]);
        }
        
        
    }
    
   
    return 0;
}