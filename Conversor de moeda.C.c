/*Autor.: Lucas Gabriel dos Santos Lima
Data....: 06-04-2024
Objetivo: Criar um algoritmo que converta determinado valor em Reais para Dólares*/
#include <stdio.h>
int main() {
    float reais;
    float taxa;
    float dolares;

    printf("Qual o valor em R$ que voce deseja converter? ");
    scanf("%f", &reais);

    printf("Qual e o valor do dolar hoje? ");
    scanf("%f", &taxa);
    getchar();

    dolares = reais * taxa;

    printf("O valor de %.2f R$ convertido para dolares ao preco de %.2f equivale a %.2f",reais,taxa,dolares);
    
    return 0;
}