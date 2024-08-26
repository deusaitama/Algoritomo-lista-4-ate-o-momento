#include <stdio.h>
#include <stdlib.h>

/*Elabore um programa que leia do usuário um número inteiro positivo n e exiba em tela se n é primo.*/

int main()
{
    int i,j,x;
    float conta=0,soma,n;
    printf("Digite o numero n\n");
    scanf("%f",&n);
    x=n;
    for(i=1;i<=x;i++){
        conta=conta+(i/n);
        n--;
    }
    printf("%f",conta);


}
