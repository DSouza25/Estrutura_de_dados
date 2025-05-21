// Crie uma estrutura Atleta com nome e tempo (float) em uma corrida. Leia os dados de 5 atletas e determine o vencedor (menor tempo).

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    struct Atleta
    {
        char nome[50];
        float tempo;
    };
    int quantidade = 0;
    struct Atleta *atletas = NULL;
    int campeao;
    for (int i = 0; i < 5; i++)
    {
        system("cls");
        atletas = realloc(atletas, (quantidade +1)*sizeof(struct Atleta));
        printf("Digite o nome do %do atleta: ", i+1);
        fgets(atletas[i].nome, sizeof(atletas[i]), stdin);
        atletas[i].nome[strcspn(atletas[i].nome, "\n")] = '\0';
        printf("Digite o tempo do %do atleta: ", i+1);
        scanf("%f", &atletas[i].tempo);
        int c;
        while((c = getchar())!='\n' && c != EOF);

        if(i == 0){
            campeao = i;
        }else{
            if (atletas[i].tempo <= atletas[campeao].tempo)
            {
                campeao = i;
            }
        }
        quantidade++;
    }
    system("cls");
    printf("O atleta campeao foi %s com o tempo de %.2fs", atletas[campeao].nome, atletas[campeao].tempo);
    return 0;
}