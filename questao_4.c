/**
 *  Questão IV (3,0)
 *
 *  Escreva um programa em C, que leia duas sequencias de três números correspondendo a idade em anos, meses e dias de duas pessoas.
 *  O programa deve verificar e imprimir qual das duas pessoas (a primeira ou a segunda) é mais velha ou se elas possuem a mesma idade.
 *  Por exemplo, se os valores lidos forem 8 anos, 4 meses e 2 dias para a primeira pessoa
 *  e 8 anos, 3 meses e 15 dias para a segunda; o programa deve imprimir: "A primeira pessoa é mais velha".
 *
 *  Obs: Resposta sem validação das entradas
 *
 *  @autor  Eric Azevedo Carvalho
 *  @date   26/07/2016
 */

#include<stdio.h>
#include<stdlib.h>

int main(){
    // Obs: o (p) é uma  flag que pode armazenar um três valores: 0,1,2;
    // esta flag evita a repetição de saidas do printf dentro das condicionais aninhadas.
    int p, p1d,p1m,p1a,p2d,p2m,p2a;

    printf("Digite de forma sequencial o número de dias, meses e anos da primeira pessoa:\n");
    scanf("%d%d%d",&p1d,&p1m,&p1a);

    printf("Digite de forma sequencial o número de dias, meses e anos da segunda pessoa:\n");
    scanf("%d%d%d",&p2d,&p2m,&p2a);

    if(p1a==p2a){ // anos
        if(p1m==p2m){ // meses
            if(p1d==p2d){ // dias
                p=0;
            }
            else if(p1d>p2d){ p=1; }
            else{ p=2; }
        }
        else if(p1m>p2m){ p=1; }
        else{ p=2; }
    }
    else if(p1a>p2a){ p=1; }
    else{ p=2; }


    if(p==1){ printf("\nA primeira pessoa é mais velha.\n");  }
    else if(p==2){ printf("\nA segunda pessoa é mais velha.\n");  }
    else{ printf("\nAs duas pessoas possuem a mesma idade.\n");  }

    getchar();
    return 0;
}
