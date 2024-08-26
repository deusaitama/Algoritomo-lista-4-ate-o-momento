#include <stdio.h>
#include <stdlib.h>

/*Elabore um programa que solicite um número par ao usuário. Enquanto o usuário digitar um número ímpar o
programa deve solicitar outro número, até que seja digitado um número par.*/
int main()
{
    int i,numero;
    printf("Digite um numero par\n");
    scanf("%i",&numero);
    for(i=0;numero%2!=0;i++){
        printf("Numero impar, digite outro numero\n");
        scanf("%i",&numero);
    }


    return 0;
}

