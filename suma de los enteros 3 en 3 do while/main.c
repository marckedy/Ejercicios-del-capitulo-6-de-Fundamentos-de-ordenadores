#include <stdio.h>
#include <stdlib.h>

int main() {
    int x=2,suma;
    printf("Lista de los numeros:\n");
    do{
        x=x+3;
        if(x%5==0)
            suma=suma+x;
        printf("%d ",x);
    }while(x<50);
    printf("\n\nSumas de los numeros enteros divisibles por 5:\n");
    printf("%d",suma);
    return 0;
}

