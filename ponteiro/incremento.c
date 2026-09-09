#include <stdio.h>
//função incremento
void incrementar(int x){
    x = x + 1;
}

void incrementar_ref(int *p){// aqui, quando a função receber o endereço de b(&b), ela vai até o endereço de b
    *p = *p + 1;// aqui, diz: pegue o endereço de b, armazene o endereço de b(que tem o valor 10) e some com 1;
}

int main(void){
    int a = 10;
    incrementar(a);
    printf("O resultado é: %d\n", a);// retorna 10, pois em c os paramétros são passados por cópia, então para resolver e mudar a variável original usamos ponteiros, que sao passados por referência

    int b = 10;
    incrementar_ref(&b);// Mostra o endereço de b(&b)
    printf("O resultado correto do incremento para o valor anterior é: %d", b);
    return 0;
}


//função passada por referência usando ponteiro 
