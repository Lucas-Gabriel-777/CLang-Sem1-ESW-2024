/*Autor.:Lucas Gabriel dos Santos Lima
Data....:06-04-2024
Objetivo:Maria quer saber quantos litros de gasolina precisa colocar em seu carro e
quanto vai gastar para fazer uma viagem até a casa de sua irmã.
Dados extras:
   Distância da casa de Maria até sua irmã : 520 km
   Seu carro consome um litro a cada 12 Km rodado.
   Ela abastece sempre no mesmo posto, onde o preço da gasolina é R$ 7,20 o litro*/

#include <stdio.h>
int main() {
   //Definicao de variaveis      kpl = kilometro por litro    ct = custo total
    float kpl;
    float ct;

    kpl = 520/12;
    ct = kpl * 7.20;

    printf("Sabendo que a distancia total da viagem e de 520 km, e o carro de maria faz 12 km por litro\n");
    printf("serao necessarios %.1f litros de combustivel para completar a viagem\n ", kpl);
    printf(" sendo assim, o valor total do combustivel sera de %.2fR$",ct);

    return 0;
}
