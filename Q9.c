#include <stdio.h>
#include <stdlib.h>

/*Elabore um programa que solicite um número ímpar ao usuário. Enquanto o usuário digitar um número par o
programa deve solicitar outro número, até que seja digitado um número ímpar.*/
int main()
{
    int i,numero;
    printf("Digite um numero impar\n");
    scanf("%i",&numero);
    for(i=0;numero%2==0;i++){
        printf("Numero par, digite outro numero\n");
        scanf("%i",&numero);
    }


    return 0;
}
