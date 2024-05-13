
/*
Autor...: LUCAS GABRIEL DOS SANTOS LIMA 
Data....: 10/05/2024
Objetivo: Contar e mostrar o total de valores negativos inseridos pelo usuário.
*/

#include <stdio.h>
int main() {
    int a, i, cn = 0;

    for (i = 0; i < 5; i++) {
        printf("Digite o valor de a: ");
        scanf("%d", &a);

        if (a < 0) {
            cn++;
        }
    }

    printf("Total de valores negativos: %d", cn);

    return 0;
}
