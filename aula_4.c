#include <stdio.h>
#include <stdlib.h>

/*
                AULA 4
        LENDO NÚMERO INTEIROS
*/

int main() {

    int valor, valor2; //variável para guardar um valor do tipo inteiro

    valor=50;

    printf("Digite um valor inteiro:");

    scanf("%d",&valor);

    printf("Digite outro valor:");

    scanf("%d", &valor2);

    printf("\n\nPrimeiro valor: %d\nSegundo valor: %d\n", valor, valor2);

    return 0;
}
