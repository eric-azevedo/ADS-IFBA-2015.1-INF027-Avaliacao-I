/**
 *  Um programa para gerenciar os saques de um caixa eletrônico deve possuir algum
 *  mecanismo para decidir o número de notas de cada valor que deve ser disponibilizado
 *  para o cliente que realizou o saque. Um possível critério seria o da "distribuição ótima"
 *  no sentido de que as notas de menor valor fossem distribuídas em número mínimo
 *  possível. Por exemplo, se a quantia solicitada fosse R$ 87,00, o programa deveria indicar
 *  uma nota de R$ 50,00, três notas de R$ 10,00, uma nota de R$ 5,00 e duas notas de R$
 *  1,00.
 *  Escreva um programa que receba o valor da quantia solicitada e retorne a
 *  distribuição das notas de acordo com o critério da distribuição ótima (considere existir
 *  notas de R$1,00; R$2,00; R$5,00; R$10,00; R$20,00; R$50,00 e R$100,00).
 *
 *  @autor  Eric Azevedo Carvalho
 *  @date   26/07/2016
 */

int main(){

    int valor, resto;
    int nota_1=0, nota_2=0, nota_5=0, nota_10=0, nota_20=0, nota_50=0, nota_100=0;

    printf("Digite o valor:\n");
    scanf("%d",&valor);

    if(valor >= 100){  nota_100 = valor / 100;  resto = valor % 100; }
    if(resto >= 50) {  nota_50 = resto / 50;    resto %= 50;}
    if(resto >= 20) {  nota_20 = resto / 20;    resto %= 20; }
    if(resto >= 10) {  nota_10 = resto / 10;    resto %= 10;  }
    if(resto >= 5)  {  nota_5 = resto / 5;      resto %= 5;  }
    if(resto >= 2)  {  nota_2 = resto / 2;      resto %= 2;  }
    if(resto >= 1)  {  nota_1 = resto / 1;      resto %= 1;   }

    if(nota_100) printf("\n%d de 100 reais",  nota_100);
    if(nota_50)  printf("\n%d de 50 reais",   nota_50);
    if(nota_20)  printf("\n%d de 20 reais",   nota_20);
    if(nota_10)  printf("\n%d de 10 reais",   nota_10);
    if(nota_5)   printf("\n%d de 5 reais",    nota_5);
    if(nota_2)   printf("\n%d de 2 reais",    nota_2);
    if(nota_1)   printf("\n%d de 1 real",     nota_1);
}
