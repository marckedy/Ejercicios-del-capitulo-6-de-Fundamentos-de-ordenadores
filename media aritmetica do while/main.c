
#include <stdio.h>
#include <stdlib.h>

int main() {
    float x,suma,media,num;
    printf("Introduzca la lista de numeros reales (>0) finalizada en -1.0\n");
    
    do{
        scanf("%f",&x);
        suma=suma+x;
        num++;
    }while(x!=-1.0);
    
    media=(suma+1)/(num-1);
    printf("%.2f",media);
    return 0;
}


