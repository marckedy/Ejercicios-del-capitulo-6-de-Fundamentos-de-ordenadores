#include <stdio.h>
#include <stdlib.h>

int main() {
    int x=2,suma;
    printf("Lista de los numeros:\n");
    
    
    while(x<50){
        x=x+3;
        if(x%5==0)
            suma=suma+x;
        printf("%d ",x);
    }
    
    printf("\n\nSumas de los numeros enteros divisibles por 5:\n");
    printf("%d",suma);
    return 0;
}

