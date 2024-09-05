/*Autor: Lucas Gabriel dos Santos Lima
  Data:  15-08-2024
  Turma: ESW 2A
  Ojetivo: Crie um programa que le o nome de um funcionario, as horas por ele trabalhadas e seu salario/hora. O 
  programa devera informar o salario final do funcionario, considerando 50% de acrescimo para horas extras. 
  Considere como padrao 40 horas semanais*/

#include <stdio.h>
int main() {

  //Definicao de variaveis
  //ht = horas totais     sh = salario por hora     sf = salario final   he = horas extras
  char nome[50];
  int ht;
  float sh,ss,sf,he = 0;

  //Obtendo valores das variaveis
    printf("Nome do funcionario: ");
    scanf("%s", nome);

    printf("Total de horas trabalhadas: ");
    scanf("%d", &ht);

    printf("Salario por hora(): ");
    scanf("%f", &sh);

    //Estabelecendo condicoes
    if (ht>40){
        he = (ht-40) * ((sh*0.5)+ sh);
    }

    //Calculando valores
    ss = (sh*40) + he;
    sf = ((sh*40)*4) + he;

    //Exibindo valores finais
    printf("Salario final do funcionario %s e de %.2f R$ por semana e %.2f R$ por mes \n(com base no calculo de 4 semanas ao mes)",nome,ss,sf);
    return 0;
}
//✟
