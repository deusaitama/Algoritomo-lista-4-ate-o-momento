#include <stdio.h>
#include <stdlib.h>


/*Escreva um programa que pergunte ao usu�rio quantos alunos est�o matriculados em uma turma. Em seguida o
programa deve solicitar as notas dos alunos. Por fim, o programa deve mostrar a m�dia aritm�tica*/
int main()
{
    int i,aluno;
    float nota,media,soma=0;
    printf("Digite as notas dos alunos\n");
    scanf("%i",&aluno);

    for(i=0;i<aluno;i++){
        printf("Digite a nota do aluno %i: ",i+1);
        scanf("%f",&nota);
        soma=soma+nota;
    }
    media=soma/aluno;
    printf("A media aritimetica eh: %.2f",media);

    return 0;
}
