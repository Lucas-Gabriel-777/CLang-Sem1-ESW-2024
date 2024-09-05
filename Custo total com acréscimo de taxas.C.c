/*Autor.: Lucas Gabriel dos Santos Lima
Data....: 06-04-2024
Objetivo: O custo ao consumidor de um carro novo é a soma do custo de fábrica
com a percentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). 
Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%,
escrever um algoritmo que leia o custo de fábrica de um carro e escreva o custo ao consumidor. */

#include <stdio.h>
int main () {
    //Definicao de variaveis    pd = Porcentagem do distribuidor    i = impostos
    float preco;
    float pd;
    float i;
    float custo;

    printf("Qual e o preco do carro direto da fabrica? ");
    scanf("%f", &preco);

    i = preco * 0.45;
    pd = preco * 0.28;
    custo = i+pd+preco;

    printf("Apos o acrescimo das porcentagens do distribuidor(28), e da taxa de impostos(45),\n o valor final do carro passa a ser de %.2f",custo);
    return 0;
}
