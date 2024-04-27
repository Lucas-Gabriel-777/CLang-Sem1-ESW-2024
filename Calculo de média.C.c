/*Autor.: Lucas Gabriel dos Santos Lima
Data....: 06-04-2024
Objetivo: Criar um algoritmo que leia as 3 notas de um aluno e calcule a média final deste 
aluno. Considerar que a média é ponderada e que o peso das notas é: 2, 3 e 5, respectivamente. */
#include <stdio.h>
int main() {
    float n1;
    float n2;
    float n3;
    float media;

    printf("Qual e a primeira nota? ");
    scanf("%.1f", &n1);

    printf("Qual e a segunda nota? ");
    scanf("%.1f", &n2);

    printf("Qual e a terceira nota? ");
    scanf("%.1f", &n3);

    media = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;

    printf("Com base nas 3 notas apresentadas, a media ponderada das notas e de %.1f",media);

    return 0;
}