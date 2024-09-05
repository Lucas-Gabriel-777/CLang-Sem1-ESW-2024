/*Autor...: LUCAS GABRIEL DOS SANTOS LIMA 
  Data....: 10/05/2024
  Objetivo: Contar e mostrar o total de valores negativos inseridos pelo usuário.*/

#include <stdio.h>
int main() {
    //Defnicao de variaveis    nn = Numero negativo    i = contador do laco de repeticao (variavel de controle)
    //cn = contador de negativos 
    
    int nn, i, cn = 0;

    for (i = 0; i < 5; i++) {
        printf("Digite um valor: ");
        scanf("%d", &nn);

        if (nn < 0) {
            cn++;
        }
    }

    printf("Total de valores negativos: %d", cn);
    return 0;
}
