/*Autor: Lucas Gbriel dos Santos Lima
Data: 15-08-2024
Turma: ESW 2A
Objetivo: Crie um programa que calcule o valor do desconto na mensalidade do membro de um clube com base no sexo e idade do membro*/


#include <stdio.h> 
int main() {
    /*Definicao de variaveis
      mens = mensalidade     desc = desconto*/

    char nome[80], sexo;
    int idade;
    float mens,desc = 0;

    //Obtencao de valores para as variaveis atraves de input do usuario
    printf("Valor da mensalidade: ");
    scanf("%f", &mens);
    
    printf("Nome do(a) associado(a): ");
    scanf("%s", nome);
 
    sexo = 'o';
    do {
        printf("Sexo (M ou F): ");
        scanf(" %c", &sexo);
    } while (sexo!='M' &&  sexo!= 'F');

    printf("Idade: ");
    scanf("%d", &idade);

    //Estabelecendo condicoes
    if (sexo=='F'){
        if (idade>0 && idade<30){
            desc=20;
        } else if (idade>30 && idade<40){
            desc=30;
        }else if (idade>40){
            desc=35;
        }
    } else if (sexo=='M'){
            if(idade>0 && idade<=25){
            desc=0;
        } else if (idade>25){
            desc=25;
        }
    }
    //Calculando desconto e valor final da mensalidade
    desc = (desc/100)*mens;
    mens = mens - desc;

    //Imprimindo resultados
    printf("O(A) Associado(a) %s, de %d anos paga %.2f Reais na mensalidade",nome,idade,mens);
    return 0;
}
//✟