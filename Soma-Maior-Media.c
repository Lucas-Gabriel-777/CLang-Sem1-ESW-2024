/*Autor....: Lucas Gabriel dos Santos Lima 
  Data.....: 30/05/2024
  Objetivo.: Ler um vetor de 10 numeros reais e calcular a soma dos valores que sao maiores que a media do vetor.*/

#include <stdio.h>
int main() {
    float vetor[10], soma = 0.0, media;

    printf("Soma acima da media:\n");
    printf("Digite 10 numeros reais:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }

    media = soma / 10;

    soma = 0.0; 
    for(int i = 0; i < 10; i++) {
        if(vetor[i] > media) {
            soma += vetor[i];
        }
    }

    printf("Soma dos valores maiores que a media: %.2f\n", soma);
    return 0;
}