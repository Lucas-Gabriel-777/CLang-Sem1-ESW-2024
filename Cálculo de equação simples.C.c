/*Autor.: Lucas Gabriel dos Santos Lima
Data....: 06-04-2024
Objetivo: Criar um algoritmo que calcule a expressão  
R=(( x * 5) * y) * z, lendo os valores de x, y e z pelo teclado*/
#include <stdio.h>
int main() {
    int x;
    int y;
    int z;
    int r;

    printf("Utilize APENAS valores inteiros\n");
    printf("Digite o valor da incognita x: ");
    scanf("%d", &x);

    printf("Digite o valor da incognita y: ");
    scanf("%d", &y);
    getchar();

    printf("Digite o valor da incognita z: ");
    scanf("%d", &z);

    r = (( x * 5) * y) * z;

    printf("De acordo com os valores apresentados, o resultado da equacao (( x * 5) * y) * z\n e igual a %d", r);
    
}