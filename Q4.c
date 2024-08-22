#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,N,Num1,Num2;
    printf("Programa que mostra os multiplos de N entre Num1 e Num2\n");
    printf("Digite N, Num1 e Num2 respectivamente\n");
    scanf("%i%i%i",&N,&Num1,&Num2);

        if(N>Num2 || N>Num1){
            printf("Nao existem multiplos de <N> entre <Num1> e <Num2>");
        }else{
            if(Num1<Num2){
                for(i=Num1;i<=Num2;i++){
                    if(i%N==0){
                        printf("%i\n",i);
                    }
                }
            }else{
                for(i=Num2;i<=Num1;i++){
                    if(i%N==0){
                        printf("%i\n",i);
                    }
                }

            }
        }
    return 0;
}
