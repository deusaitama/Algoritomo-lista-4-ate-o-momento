#include <stdio.h>
#include <stdlib.h>

/*Desenvolva um programa que leia do usu�rio uma sequ�ncia de n�meros inteiros n�o-nulos e exiba em tela seus
quadrados. O programa deve ser finalizado quando o usu�rio digitar o valor 0.*/

int main()
{
    float numero,quadrado=0;
    do{
        printf("Digite um numero nao nulo\n");
        scanf("%f",&numero);
        numero=numero*numero;
        printf("O quadrado do numero digitado eh: %.0f\n",numero);
    }while(numero!=0);
    return 0;
}
