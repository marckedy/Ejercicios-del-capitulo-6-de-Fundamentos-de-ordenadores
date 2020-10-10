
#include <stdio.h>
#include <stdlib.h>


int main() {
    int num,x,num1;
    
    printf("Ingrese 10 numeros enteros\n");
    do{
        x++;
        scanf("%d",&num);
        num1=num1+num;
    }while(x<10);
    printf("\nLa suma de los enteros es: %d\n",num1);
    return 0;
}

