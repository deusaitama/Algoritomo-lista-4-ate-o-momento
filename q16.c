#include <stdio.h>
#include <stdlib.h>

/*Fa�a um algoritmo que leia um n�mero positivo e exiba em tela seus divisores. Exemplo: os divisores do n�mero
66 s�o: 1, 2, 3, 6, 11, 22, 33 e 66.*/

int main()
{
    int i,n;
    float x,soma=0,maior,menor,j=1,media;

    printf("Digite o numero : ");
    scanf("%i",&n);

    for(i=1;i<=n;i++){
        if(n%i==0)
            printf("%i ",i);
    }


}
