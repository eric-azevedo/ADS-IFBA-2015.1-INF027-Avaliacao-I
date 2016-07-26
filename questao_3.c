/**
 *  Questão III (2,0)
 *
 *  Escreva um programa em C, que leia quatro notas de um aluno e imprima a nota final deste aluno.
 *  O cálculo da nota final, é feito descartando-se a menor das quatro notas e calculando a média aritimética das três restantes.
 *
 *  @autor  Eric Azevedo Carvalho
 *  @date   26/07/2016
 */

#include<stdio.h>
#include<stdlib.h>

int main(){
    float n1, n2, n3, n4, media, menor;

    printf("Digite as quatro notas sequencialmente:\n");
    scanf("%f%f%f%f",&n1,&n2,&n3,&n4);

    menor = n1;
    if(menor > n2) menor = n2;
    if(menor > n3) menor = n3;
    if(menor > n4) menor = n4;

    media = ( (n1+n2+n3+n4) - menor ) / 3; //Obs: ((6+5+4+2)-2) = 6+5+4 -> apenas as tres maiores

    printf("\nA média aritimética descartando-se a menor das quatro notas é: %f\n", media);

    getchar();
    return 0;
}

