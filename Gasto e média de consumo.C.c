/*Autor.: Lucas Gabriel dos Santos Lima
Data....: 06-04-2024
Objetivo: Criar um programa que após receber as informações de combustível gasto e
quilômetros percorridos por um automóvel, calcule os gastos de combustível em Reais, 
e a média de consumo que o carro teve durante a viagem.
(Considerar que um litro custa R$ 5,24) */

#include <stdio.h>
int main() {
    float lt;
    float km;
    float media;
    float gasto;
    
    printf("Quantos litros de combustivel foram gastos durante a viagem? ");
    scanf("%f", &lt);

    printf("Quantos km aviagem durou? ");
    scanf("%f", &km);

    media = km / lt;
    gasto = lt * 5.24;

    printf("O gasto com combustivel para a viagem foi de %.2f R$\n",gasto);
    printf("A media de consumo do carro e de %.2f litros por km",media);
    
    return 0;
}