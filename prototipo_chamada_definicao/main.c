//o arquivo principal da função para saber qual numero é maior, e qual é menor

//incluimos o arquivo de prototipo dentro das aspas pra chamar ele pra dentro desse arquivo 
/*chamamos o prototipo pois o usuraio precisa apenas saber quais parametros esta sendo usado, aqui
o main só precisa saber que a função existe*/
#include <stdio.h>
#include "prototipo.h"

//criamos um main para modificar o que vai aparecer pro usuario chamando a função que esta no arquivo .c
int main() {
    int resultado = maior(3,5);
    printf("O maior numero entre 3 e 5 é %d\n", resultado);
    return 0;
}