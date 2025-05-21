// Crie uma estrutura Contato com nome, telefone e email. Implemente um menu para adicionar e listar contatos (vetor de até 10 contatos).

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    struct Contato{
        char nome[50], telefone[13], email[50];
    };
    int opcao = 0, quantidade = 0;
    struct Contato *contatos = NULL;
    while (opcao != 3)
    {
        system("cls");
        printf("Digite a opcao desejada: \n1 - adicionar contato\n2 - listar contatos\n3 - sair do sistema\n");
        scanf("%d", &opcao);
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        switch (opcao)
        {
        case 1 :
            system("cls");
            contatos = realloc(contatos, (quantidade +1)*sizeof(struct Contato));
            printf("### Adicionando novo contato ###\n");
            printf("Nome: ");
            fgets(contatos[quantidade].nome, sizeof(contatos[quantidade]), stdin);
            contatos[quantidade].nome[strcspn(contatos[quantidade].nome, "\n")] = '\0';
            printf("Telefone: ");
            fgets(contatos[quantidade].telefone, sizeof(contatos[quantidade]), stdin);
            contatos[quantidade].telefone[strcspn(contatos[quantidade].telefone, "\n")] = '\0';
            printf("E-mail: ");
            fgets(contatos[quantidade].email, sizeof(contatos[quantidade]), stdin);
            contatos[quantidade].email[strcspn(contatos[quantidade].email, "\n")] = '\0';
            quantidade++;
            break;
        case 2:
            system("cls");
            
            if(contatos == NULL)printf("Nenhum contato cadastrado...\n");

            for (int i = 0; i < quantidade; i++)
            {
                printf("Nome: %s | Telefone: %s | E-mail: %s\n-------------------------------------------------------\n\n", contatos[i].nome, contatos[i].telefone, contatos[i].email);
            }
            printf("\n\nPressione Enter para voltar ao menu...");
            system("pause");
            break;
        case 3:
            system("cls");
            printf("\nVolte sempre!\n\n");
            break;
        default:
            system("cls");
            printf("Deixa de ser maluco e escolhe uma opcao valida...");
            break;
        }
    }
    return 0;
}