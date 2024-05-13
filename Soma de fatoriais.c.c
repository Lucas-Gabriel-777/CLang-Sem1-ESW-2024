/*
Autor...: LUCAS GABRIEL DOS SANTOS LIMA 
Data....: 12/05/2024
Objetivo: Calcular e exibir o somatorio das fatoriais de 15 valores inseridos pelo usuario.
*/

#include <stdio.h>
int main() {
    int som;
    int num[15];
    int fat;
    int cont;
    int mult;
    som = 0;

    for (cont = 0; cont < 15; cont++) {
        printf("Digite o valor %d: ", cont + 1);
        scanf("%d", &num[cont]);

        mult = 1;
        for (fat = 1; fat <= num[cont]; fat++) {
            mult *= fat;
        }
        som += mult;
    }
    printf("A soma dos fatoriais equivale a %d", som);
    return 0;
} 