#include <stdio.h>
#include <stdlib.h>

/*Fa�a um programa em C que recebe dois n�meros inteiros A e B. O programa deve mostrar a soma dos inteiros
de A a B. (N�o use soma de PA. O objetivo � treinar for e while.)
*/
int main()
{
    int i,aluno;
    float A,B,soma=0;
    printf("Digite dois numeros\n");
    scanf("%f%f",&A,&B);

    for(i=A;i<=B;i++){
        soma=soma+i;
    }
    printf("A soma dos numeros de A a B eh:%.2f",soma);

    return 0;
}
