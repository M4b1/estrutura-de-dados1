#include <stdio.h>

//colocamos o valor n no for, pois não sabemos a quantidade de numero que vai ser colocada no main
void zerar(int vetor[], int n){
    for(int i=0; i<n; i++){
        vetor[i] = 0; // modifica o valor original que e colocar no main por 0
    }
}

int main(void){
    int meu_vetor[]={1,2,3,4}; //o meu vetor[] armazena os numeros que coloquei dentro desse vetor 
    //verifico os vetores originais
    for (int i = 0; i < 4; i++){
        printf("Antes da modificação: %d\n", meu_vetor[i]);
    }
    
    //zero as posições que quero(não precisa de variavel pois a nossa função é feita por void, sem retorno)
    zerar(meu_vetor, 2);//passando o vetor que quero para o parâmetro e a quantidade de elementos dentro da vetor para os parâmetros da função

    printf("Após modificação!\n");

    //verifica como está depois da modificação do vetor otiginal
    for(int i=0; i<4; i++){
        printf("Depois da modificação: %d \n",meu_vetor[i]);
    }
    return 0;
}