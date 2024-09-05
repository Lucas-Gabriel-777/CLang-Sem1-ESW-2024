/*Autor: Lucas Gbriel dos Santos Lima
Data: 14-08-2024
Turma: ESW 2A
Objetivo: Crie um programa que calcule a bonificaçao de um funcionario com base nas horas de faltadas de un funcionario 
descontadas das horas extras*/

#include <stdio.h> 

    void main() {
        /*Definicao de variaveis    
        HE = Horas Extras    HF = Horas Finais    TH = Total de Horas    AU = Aumento */
        float HE,HF,TH,AU;

        //Obtendo valores por input(teclado)
        printf("Horas extras do funcionario: ");
        scanf("%f", &HE);

        printf("Horas faltadas dos funcionario: ");
        scanf("%f", &HF);

        //Estabelecendo condicoes
        TH = HE - HF;
        if (TH>0 && TH<=10) {
            AU = 20;
        } else if (TH>10 && TH<=20) {
            AU = 40;
        } else if (TH>20 && TH<=30) {
            AU = 60;
        } else if (TH>30 && TH<=40) {
            AU = 80;
        } else if (TH>40 && TH<=100) {
            AU = 100;
        }

        //Exibindo valor final
        printf("O valor da gratificaçao do funcionario e de %.2f R$", AU);
    }