/*Autor: Lucas Gabriel dos Santos Lima
  Data: 15-08-2024
  Objetivo: Crie um programa que compare a altura de dois alunos e mostre qual e o maior e qual e o menor*/

#include <stdio.h>
int main() {

    //Definicao de variaveis    i = variavel de controle(contador)
    int aluno[5], altura[5];
    int i, maxAltura, minAltura, alunoMax, alunoMin;

    //Obtendo valores por input
    for (i = 0; i < 5; i++) {
        printf("Digite o numero do aluno %d: ", i + 1);
        scanf("%d", &aluno[i]);
        printf("Digite a altura do aluno %d (em cm): ", i + 1);
        scanf("%d", &altura[i]);
    }

    // Inicializacao das variaveis de comparacao
    maxAltura = altura[0];
    minAltura = altura[0];
    alunoalto = aluno[0];
    alunoMin = aluno[0];

    // Encontrar o aluno mais alto e o mais baixo
    for (i = 1; i < 5; i++) {
        if (altura[i] > maxAltura) {
            maxAltura = altura[i];
            alunoMax = aluno[i];
        }
        if (altura[i] < minAltura) {
            minAltura = altura[i];
            alunoMin = aluno[i];
        }
    }

    // Exibir os resultados
    printf("Aluno mais alto: Numero %d com altura %d cm\n", alunoMax, maxAltura);
    printf("Aluno mais baixo: Numero %d com altura %d cm\n", alunoMin, minAltura);

    return 0;
}