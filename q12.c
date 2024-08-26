#include <stdio.h>
#include <stdlib.h>

/*Elabore um programa que leia do usuário um número inteiro x e um inteiro não-negativo n, calcule xn sem o uso da função pow( ) e exiba o resultado em tela.*/

int main()
{
    int x,n,i,soma=1;
    printf("Digite x e n\n");
    scanf("%i%i",&x,&n);
    for(i=0;i<n;i++){
        soma=soma*x;
    }
    printf("O resultado eh %i",soma);

}
