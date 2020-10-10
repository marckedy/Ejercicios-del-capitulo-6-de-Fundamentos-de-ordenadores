
#include <stdio.h>
#include <stdlib.h>

int main() {
    int x=1,m=35,m2,suma;
    
    do{
        m2=m2+m;
        suma=suma+m2;
        x++;
    }while(x<=20);
    
    printf("%d",suma);
    return 0;
}
