#include <stdio.h>
#include <stdlib.h>

/*Elabore um programa que peça ao usuário 10 valores. Some estes valores e apresente o resultado em tela.*/

int main()
{
    int x,n,i,soma=0;

    for(i=0;i<10;i++){
        printf("Digite o valor %i: ",i+1);
        scanf("%i",&n);
        soma=soma+n;
    }
    printf("O resultado da soma eh %i",soma);

}
