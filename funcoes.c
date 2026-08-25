#include <stdio.h>
//criando a função
int soma(int num1, int num2){
    return num1+num2;
}

//chamando a função
int main(){
    int resultado = soma(2,3);
    printf("A soma dos dois numeros é: %d\n", resultado);
    return 0;
}