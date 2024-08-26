#include <stdio.h>
#include <stdlib.h>

/*Elabore um programa que leia do usuário um número inteiro positivo n e exiba em tela se n é primo.*/

int main()
{
    int i,n,k=0;
    float x,soma=0,maior,menor,j=1,media;

    printf("Digite o numero : ");
    scanf("%i",&n);

    for(i=1;i<=n;i++){
        if(n%i==0)
            k++;
    }
    if(k==2)
        printf("Numero primo");
    else
        printf("Nao eh primo");


}
