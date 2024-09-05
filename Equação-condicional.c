/*Autor: Lucas Gabriel dos Santos Lima
  Data:  15-08-2024
  Turma: ESW 2A
  Ojetivo: Ler duas variaveis A e B, se a variavel A for menor que B, fazer Y= B – A, se B for menor que A fazer Y= A – B, 
caso sejam iguais fazer Y = A + B, imprimir no final os valores de A, B e Y*/

#include <stdio.h>
int main() {

    //Definicao de variaveis
    int A,B,Y;

    //Obendo valores por input(teclado)
    printf("Variavel A: ");
    scanf("%d", &A);

    printf("Variavel B: ");
    scanf("%d",&B);

    //Definicao de condicoes
    if (A<B) {
        Y = B-A;
    } else if (B<A) {
        Y = A-B;
    } else if (A==B) {
        Y = A+B;
    }

    //Exibindo valores
    printf("Valores apresentados:\nA = %d \nB = %d \nY = %d",A,B,Y);

    return 0;
}
//✟