#include <stdio.h>
#include <stdlib.h>

/*Elabore um programa que peça ao usuário 10 valores. Some estes valores e apresente o resultado em tela.*/

int main()
{
    int i;
    float x,n,soma=0,maior,menor,j=1,media;

    printf("Digite o numero 1: ");
    scanf("%f",&n);
    maior=n;
    menor=n;
    soma=soma+n;
    for(i=1;i<10;i++){
        printf("Digite o valor %i: ",i+1);
        scanf("%f",&n);
        soma=soma+n;
        j++;
        if(n>maior)
            maior=n;
        if(menor>n)
            menor=n;
    }
    media=soma/j;
    printf("O resultado da media eh %.2f\n",soma);
    printf("O menor numero eh %.2f\n",menor);
    printf("O maior numero eh %.2f\n",maior);

}
