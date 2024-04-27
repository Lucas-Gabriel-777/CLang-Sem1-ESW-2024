/*Autor.:Lucas Gabriel dos Santos Lima
Data....:06-04-2024
Objetivo: Efetuar o cálculo e a apresentação do valor de uma prestação
em atraso*/
#include <stdio.h>
int main() {
    float taxa;
    float valor;
    int tempo;
    float prestacao;
    
    printf("Qual e o valor da prestacao em atraso? ");
    scanf("%f", &valor);

    printf("Qual e o valor(porcentagem) da taxa a ser acrescentada? ");
    scanf("%f", &taxa);
    getchar();

    printf("a quantos meses a parcela esta atrasada? ");
    scanf("%d", &tempo);

    prestacao = valor + (valor * (taxa/100)*tempo);

    printf("O valor da prestacao que antes era de %.2f R$, passa a ser de %.2f R$",valor,prestacao);

    return 0;
}