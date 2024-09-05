/*Autor: Lucas Gabriel dos Santos Lima
  Data: 15-08-2024
  Objetivo: Crie um programa que fornece desconto no valor de uma mensalidade com base no sexo e idade do associado */

#include <stdio.h>
int main() {

    //Definicao de variaveis   mens = mensalidade    desc = desconto
    char nome[80], sexo;
    int idade;
    float mens, desc = 0;

    //Obtendo valores para as variaveis por input de usuario
    printf("Valor da mensalidade: ");
    scanf("%f", &mens);

    printf("Nome do(a) associado(a): ");
    scanf("%s", nome);

    do {
        printf("Sexo (M ou F): ");
        scanf(" %c", &sexo);
    } while (sexo != 'M' && sexo != 'F');

    printf("Idade: ");
    scanf("%d", &idade);

    //Definicao de condicoes
    if (sexo == 'F') {
        if (idade > 0 && idade < 30) {
            desc = 20;
        } else if (idade >= 30 && idade < 40) {
            desc = 30;
        } else if (idade >= 40) {
            desc = 35;
        }
    } else if (sexo == 'M') {
        if (idade > 0 && idade <= 25) {
            desc = 0;
        } else if (idade > 25) {
            desc = 25;
        }
    }

    //Calculando valores
    desc = (desc / 100) * mens;
    mens = mens - desc;

    //Exibindo valores
    printf("O(A) Associado(a) %s, de %d anos paga %.2f Reais na mensalidade\n", nome, idade, mens);

    return 0;
}
//✟