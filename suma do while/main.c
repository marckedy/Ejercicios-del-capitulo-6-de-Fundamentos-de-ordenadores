
#include <stdio.h>
#include <stdlib.h>

int main() {
    int x,i,i2,suma;
    printf("Ingrese un numero\n");
    scanf("%d",&i);

    do{
        i2=i*i*i;
        suma=suma+i2;
        i--;
    }while(i>0);
   
    printf("\n%d",suma);
    return 0;
}
