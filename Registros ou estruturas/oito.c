// Crie uma estrutura Livro com título, autor e ano de publicação. Leia e exiba os dados de 3 livros.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    struct Livro
    {
        char titulo[100], autor[50];
        int ano;
    };
    
    int opcao = 0;
    int quantidade = 0;
    struct Livro *livros = NULL;

    while (opcao != 3)
    {
        system("cls");
        printf("Digite o numero da opcao desejada: \n1 - Ver lista de livros\n2 - Adicionar livro\n3 - sair do sistema\n-> ");
        scanf("%d", &opcao);
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        switch (opcao){
        case 1:
            system("cls");
            if (livros == NULL){
                printf("Nenhum livro cadastrado.");
            }else{

                for (int i = 0; i < quantidade ; i++)
                {
                    printf("Titulo: %s", livros[i].titulo);
                    printf("\nAutor: %s", livros[i].autor);
                    printf("\nAno: %d", livros[i].ano);
                    printf("\n-----------------------------------------------------\n");
                }
            }
            
            printf("\n\nPressione Enter para voltar ao menu...");
            system("pause");
            
            break;
        case 2:
            livros = realloc(livros, (quantidade + 1)*sizeof(struct Livro));
            system("cls");
            printf("Digite o titulo do livro: ");
            fgets(livros[quantidade].titulo, sizeof(livros[quantidade]), stdin);
            livros[quantidade].titulo[strcspn(livros[quantidade].titulo, "\n")] = '\0';

            printf("Digite o nome do autor: ");
            fgets(livros[quantidade].autor, sizeof(livros[quantidade]), stdin);
            livros[quantidade].autor[strcspn(livros[quantidade].autor, "\n")] = '\0';

            printf("Digite o ano de publicacao: ");
            scanf("%d", &livros[quantidade].ano);
            quantidade++;
            break;
        case 3:
            printf("Obrigado por testar nosso programa!");
            break;
        default:
            system("cls");
            printf("Deixa de ser maluco e escolhe uma opcao valida!");
            printf("\n\nPressione Enter para voltar ao menu...");
            system("pause");
            break;
        }

    }

    return 0;
}