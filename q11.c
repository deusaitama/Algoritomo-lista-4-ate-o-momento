#include <stdio.h>
#include <stdlib.h>

/*11. Desenvolva um programa que leia do usu�rio uma sequ�ncia de n�meros inteiros n�o-nulos. Quando for digitado
o n�mero 0 o programa deve mostra a soma dos n�meros digitados e depois encerra.*/

int main()
{
    float numero,soma=0;
    do{
        printf("Digite um numero nao nulo\n");
        scanf("%f",&numero);
        soma=soma+numero;
    }while(numero!=0);
    printf("A soma do numero digitado eh: %.0f\n",soma);
    return 0;
}
