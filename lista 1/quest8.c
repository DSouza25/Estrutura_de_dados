#include <stdio.h>

int main(){
    int vector[]={};
    int condition = 0;
    int pos = 0;
    int number = 1;
    while (condition == 0)
    {
        if (number%2!=0)
        {
            vector[pos] = number;
            pos++;
            printf("[]|");
        }
        if (pos==9)
        {
            condition = 1;
        }
        number++;
    }
    printf("Vector: [");
    for (size_t i = 0; i < sizeof(vector)/sizeof(vector[0]); i++)
    {
        printf(" %d,", vector[i]);
    }
    printf("]");
    return 0;
}