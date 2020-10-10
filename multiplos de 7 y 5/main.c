
#include <stdio.h>
#include <stdlib.h>

int main() {
    int x=1,m=35,m2,suma;
    
    
    while(x<=20){
        m2=m2+m;
        suma=suma+m2;
        x++;
    }
    
    printf("%d",suma);
    return 0;
}
