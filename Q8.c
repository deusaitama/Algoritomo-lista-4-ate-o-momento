#include <stdio.h>
#include <stdlib.h>

/*Elabore um programa que solicite um n�mero par ao usu�rio. Enquanto o usu�rio digitar um n�mero �mpar o
programa deve solicitar outro n�mero, at� que seja digitado um n�mero par.*/
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

