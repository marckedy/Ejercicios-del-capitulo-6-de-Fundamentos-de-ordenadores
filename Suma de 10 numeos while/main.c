#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int num,x,num1;
    
    printf("Ingrese 10 numeros enteros\n");
 
    while(x<10){
        x++;
        scanf("%d",&num);
        num1=num1+num;
    }
    printf("\nLa suma de los enteros es: %d\n",num1);
    return (0);
}

