#include <stdio.h>


//criando a função média
double media(double nota1, double nota2,double nota3){
    return (nota1+nota2+nota3)/3;
}


//criando a função soma
int soma(int num1, int num2){
    return num1+num2;
}

//chamando a função
int main(){
    int resultado = soma(2,3);
    float resultmedia = media(3.2,7,9);
    printf("A soma dos dois numeros é: %d\n", resultado);
    printf("A média das três notas é: %.2f\n", resultmedia);
    return 0;
}