#include <stdio.h>

int main(){
    int vector[10] = {0,1,2,3,4,5,6,7,8,9};

    for (size_t i = 0; i < sizeof(vector)/sizeof(vector[0]); i++)
    {
        printf("Elemento %d: %d\n", i,vector[i]);
    }
    
    return 0;
}