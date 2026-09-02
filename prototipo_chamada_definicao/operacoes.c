//nesta arquivo teremos apenas a lógica da função para saber se o numero é maior ou menos 

//primeiro: conecta ao arquivo .h, que possui o cabeçalho(coloque entre aspas para chamar o prototipo)
#include "prototipo.h"

//segundo: colocar a lógica com o prototipo 
int maior(int num1, int num2){
    if(num1>num2){
        return num1;
    }else{
        return num2;
    }
}