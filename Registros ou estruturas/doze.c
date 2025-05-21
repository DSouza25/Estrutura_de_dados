// Crie uma estrutura ContaBancaria com número da conta, nome do titular e saldo. Implemente funções para depositar, sacar e exibir saldo.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ContaBancaria{
    char nome[100];
    int numeroConta;
    float saldo;
};

void depositar(struct ContaBancaria *conta, float deposito){
    conta->saldo += deposito;
}

void sacar(struct ContaBancaria *conta, float saque){
    conta -> saldo -= saque;
}

void exibirDados(struct ContaBancaria *conta){
    printf("Dados da conta:\n numero: %d | nome: %s | saldo: %.2f", conta->numeroConta, conta->nome, conta->saldo);
}

int main(){
    struct ContaBancaria conta;
    strcpy(conta.nome, "Dario Souza");
    conta.numeroConta = 2499103;
    conta.saldo = 20.00;

    exibirDados(&conta);
    printf("\n---------------------------------------------\n");

    depositar(&conta, 30.00);
    exibirDados(&conta);
    printf("\n---------------------------------------------\n");

    sacar(&conta, 10);
    exibirDados(&conta);

    return 0;
}
