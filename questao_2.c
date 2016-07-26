/**
 *	Questão II (3,0)
 *
 *	Escreva um programa em C, que leia um número menor que 9999, representando uma senha.
 * 	O programa deve verificar se a senha é válida (e imprimir “Senha válida”), ou se a senha
 *	viola alguma das seguintes regras, caso em que, o programa deverá apresentar
 *	a mensagem de violação correspondente:
 *	Regras
 *	1 - Algarismos iguais: a senha é formada por quatro algarismos idênticos.
 *		Ex: 5555
 *		Mensagem: a senha é formada por algarismos iguais
 *
 *	2 - Sequencia crescente: a senha é formada por algarismos que formam uma sequencia crescente.
 *		Ex.: 3456
 *		Mensagem: a senha é formada por uma sequencia crescente
 *
 *	3 - Sequencia decrescente: a senha é formada por algarismos que formam uma sequencia decrescente.
 *		Ex.: 4321
 *		Mensagem: a senha é formada por uma sequencia decrescente.
 *
 *  @autor  Eric Azevedo Carvalho
 *  @date   26/07/2016
 */

#include<stdio.h>
#include<stdlib.h>
int main(){
    int milhar, centena, dezena, unidade, m, c, d, u;
    int v = 0; // Obs: Flag para controlar a violação

    printf("Escreva um número menor que 9999\n");
    scanf("%d",&milhar);

    centena = milhar % 1000;
    dezena = centena % 100;
    unidade = dezena % 10;

    m = milhar / 1000;
    c = centena / 100;
    d = dezena / 10;
    u = unidade;

    /** VALIDAÇÃO **/
    // Algarismos iguais
    if(m==c && c==d && d==u){ printf("\nA senha é formada por algarismos iguais.\n"); v=1; }
    // Sequência crescente
    if(c==(m+1) && d==(c+1) && u==(d+1)){ printf("\nA senha é formada por uma sequência crescente.\n"); v=1; }
    // Sequência decrescente
    if(c==(m-1) && d==(c-1) && u==(d-1)){ printf("\nA senha é formada por uma sequência decrescente.\n"); v=1; }
    //Senha válida
    if(!v){ printf("\nSenha válida!"); }

    getchar();
    return 0;
}
