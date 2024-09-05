
/*
Autor...: LUCAS GABRIEL DOS SANTOS LIMA 
Data....: 11/05/2024
Objetivo: Calcular e mostrar a tabuada de um número inserido pelo usuário.
*/

#include <stdio.h>
int main () {
    //Definicao de variaveis    n = Numero  c = contador
    int n;
    int c;

    printf("Tabuada a ser exibida: ");
    scanf("%d", &n);

    for (c=1; c<=10; c++) {
        printf("%d X %d = %d\n",n,c,c*n);
    }
    return 0;
}
