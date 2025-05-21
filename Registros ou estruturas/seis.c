// Crie uma estrutura Aluno com nome, matrícula e 3 notas. Calcule a média e exiba os dados do aluno

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    struct Aluno
    {
        char nome[100], matricula[10];
        float nota1, nota2, nota3;
    }aluno1;
    system("cls");
    printf("Digite o nome do aluno: ");
    fgets(aluno1.nome, sizeof(aluno1.nome), stdin);
    aluno1.nome[strcspn(aluno1.nome, "\n")] = '\0';
    printf("Digite a matricula do aluno: ");
    fgets(aluno1.matricula, sizeof(aluno1.matricula), stdin);
    aluno1.matricula[strcspn(aluno1.matricula, "\n")] = '\0';
    printf("Digite a primeira nota: ");
    scanf("%f", &aluno1.nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &aluno1.nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &aluno1.nota3);
    
    float media = (aluno1.nota1 + aluno1.nota2 + aluno1.nota3)/3;
    system("cls");

    printf("Aluno: %s\nMatricula: %s\nMedia: %.2f\n\n", aluno1.nome, aluno1.matricula, media);
    return 0;
}