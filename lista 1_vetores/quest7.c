#include <stdio.h>

int main(){
    int vector[10] = {0,1,2,3,4,5,6,7,8,9};
    int num;
    int status = 0;
    printf("Digite o valor da busca: ");
    scanf("%d", &num);
    for (size_t i = 0; i < sizeof(vector)/sizeof(vector[0]); i++)
    {
       if (num == vector[i])
       {
        status = 1;
       }
    }
    
    if (status == 1)
    {
        printf("O vetor contem o valor %d", num);
    }else{
        printf("O vetor nao contem o valor %d", num);
    }
    
    return 0;
}