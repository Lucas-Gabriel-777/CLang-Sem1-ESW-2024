/*Autor.: Lucas Gabriel dos Santos Lima
Data....: 06-04-2024
Objetivo: Criar um programa que leia a idade de uma pessoa expressa em anos, 
meses e dias e mostre-a expressa apenas em dias. 
Assuma, neste programa, que um ano tem 365 dias e que um mês tem 30 dias. */

#include <stdio.h>
int main() {
    int anos;
    int meses;
    int dias;
    int t;

    printf("Quantos anos voce tem? ");
    scanf("%d",&anos);

    printf("Quantos meses? ");
    scanf("%d",&meses);
    getchar();

    printf("Quantos dias? ");
    scanf("%d",&dias);

    anos = anos*365;
    meses = meses*30;
    t = dias + meses + anos;

    printf("Total de dias = %d",t);
    return 0;
}