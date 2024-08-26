#include <stdio.h>
#include <stdlib.h>

/*Elabore um programa que leia do usuário um número inteiro positivo n e exiba em tela os n primeiros números
naturais ímpares. Exemplo: Para n = 4 a saída deverá ser 1, 3, 5, 7.*/
int main()
{
    int i,numero;
    printf("Digite um numero inteiro\n");
    scanf("%i",&numero);
    printf("Os primeiros %i numeros impares sao:",numero);

    for(i=1;i<=numero*2;i=i+2){
        printf("%i ",i);
    }

    return 0;
}

