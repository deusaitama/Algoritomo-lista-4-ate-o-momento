#include <stdio.h>
#include <stdlib.h>

/*Elabore um programa que leia do usu�rio um n�mero inteiro positivo n e exiba em tela se n � primo.*/

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
