#include <stdio.h>
#include <stdlib.h>

/*Elabore um programa que leia do usu�rio um n�mero inteiro n�o-negativo n, calcule n! e exiba o resultado em tela.*/

int main()
{
    int x,n,i,soma=1;
    printf("Digite n\n");
    scanf("%i",&n);
    for(;n>0;n--){
        soma=soma*n;
    }
    printf("O resultado do fatorial eh %i",soma);

}
