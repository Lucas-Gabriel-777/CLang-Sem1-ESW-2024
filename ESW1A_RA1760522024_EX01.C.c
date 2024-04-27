/*Autor.:Lucas Gabriel dos Santos Lima
Data....:06-04-2024
Objetivo: Fazer um programa para ler a base e a altura
 um triângulo. Em seguida, escreva a área do mesmo.*/
#include <stdio.h>
int main() {
    float altura;
    float base;
    float area;

    printf("Qual e altura do triangulo? ");
    scanf("%f", &altura);

    printf("Qual e a base do triangulo? ");
    scanf("%f",&base);

    area = (base*altura)/2;
    printf("A area do triangulo equivale a %.2f", area);
    return 0;
}