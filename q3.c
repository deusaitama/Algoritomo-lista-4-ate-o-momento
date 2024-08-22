#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Digite A e B respectivamente\n");
    scanf("%i%i",&a,&b);

    if(a<=b){
        for(;a<=b;a++)
            printf("%i\n",a);
    }else
        printf("A>B");
    return 0;
}
