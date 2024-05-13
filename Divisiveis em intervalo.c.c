
/*
Autor...: LUCAS GABRIEL DOS SANTOS LIMA 
Data....: 10/05/2024
Objetivo: Imprimir os numeros divisiveis por 4 menores que 200.
*/

#include <stdio.h>

int main() {
    int cont = 1;

    printf("Numeros divisiveis por 4 e menores que 200:");
    while (cont < 200) {
        if (cont % 4 == 0) {
            printf("%d, ", cont);
        }
        cont++;
    }

    return 0;
}
