#include<stdio.h>
#include<stdlib.h>
/*

Como criar variáveis e ler caracteres com a função scanf? | aula 6

*/

int main() {

    char sexo = 's';

    printf("Valor da variavel sexo: %c\n", sexo);

    printf("digite seu sexo: (f, F, m, M)");

    scanf("%c", &sexo);

    printf("Valor da variavel sexo é: %c\n", sexo);
}
