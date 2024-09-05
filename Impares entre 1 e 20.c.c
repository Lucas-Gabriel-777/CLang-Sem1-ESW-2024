/*Author..: LUCAS GABRIEL DOS SANTOS LIMA <contabtclucas@gmail.com>
  Date......: 10/05/2024
  OB..........: Imprimir os valores impares entre 0 e 20.*/

#include <stdio.h>
int main() {
    //Definicao de variaveis     i = impares ( tambem usado como contador no laco "for')
    int i;
    for ( i = 0; i <=20; i++){
        if (i % 2 != 0){
            printf("%d ",i);
        }
    }
    return 0;
}
