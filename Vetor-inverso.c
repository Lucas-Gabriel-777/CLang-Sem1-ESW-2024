/*Autor....: Lucas Gabriel dos Santos 
  Data.....: 30/05/2024
  Objetivo.: Ler um vetor de 10 numeros inteiros e imprimir os valores em ordem reversa.*/

#include <stdio.h>

int main() {
    int vetor[10];

    printf("Vetor Inverso");
    printf("Digite 10 numeros inteiros:\n");
    for(int i = 1; i <= 10; i++) {
        printf("Posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nValores em ordem reversa:\n");
    for(int i = 10; i >= 1; i--) {
        printf("%d ", vetor[i]);
    }

    return 0;
}