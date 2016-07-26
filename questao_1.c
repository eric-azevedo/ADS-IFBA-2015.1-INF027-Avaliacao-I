/**
 *  Questão	I (2,0)
 *
 *  Escreva	um programa	em C, que leia um número menor que 9999 e mostre a soma dos dígitos centrais (2º e	3º dígitos).
 *  Assim, se o	número informado for 4326, a saída do programa deverá ser 5 (3+2).
 *
 *  @autor  Eric Azevedo Carvalho
 *  @date   26/07/2016
 */

#include<stdio.h>
#include<stdlib.h>
int main(){
    int milhar ,centena, dezena, unidade;
    int m,c,d,u, soma;

    printf("Escreva um número menor que 9999\n");
    scanf("%d",&milhar);

    centena = milhar % 1000;
    dezena = centena % 100;
    unidade = dezena % 10;

    m = milhar / 1000;
    c = centena / 100;
    d = dezena / 10;
    u = unidade;

    soma = c + d;

    printf("\nA soma dos dígitos centrais (2º e 3º dígitos) de %d é: %d\n",milhar, soma );

    getchar();
    return 0;
}
