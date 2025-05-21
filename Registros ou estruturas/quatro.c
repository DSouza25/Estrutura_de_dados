// Crie uma estrutura Data com dia, mês e ano (int). Leia uma data e exiba no formato dd/mm/aaaa.

#include <stdio.h>
#include <stdlib.h>

int main(){
    struct Data
    {
        int dia, mes, ano;
    }data1;
    
    printf("Digite o dia do mes: ");
    scanf("%d", &data1.dia);
    printf("Digite o numero do mes: ");
    scanf("%d", &data1.mes);
    printf("Digite o ano: ");
    scanf("%d", &data1.ano);

    system("cls");

    printf("Data: %d/%d/%d", data1.dia, data1.mes, data1.ano);

    return 0;
}