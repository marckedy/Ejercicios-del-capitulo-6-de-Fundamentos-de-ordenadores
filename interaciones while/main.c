
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, cont=0;
    for(i=0; i<3; i++)
        for(j=10; j>8; j--){
            printf("Interaccion %d\n", cont+1);
            cont=cont+1;
        }
    
    printf("\n");
    
    cont=0;
    for(i=0; i<3; i++)
        for(i=10; i>8; i--){
            printf("Interaccion %d\n", cont+1);
            cont=cont+1;
        }
    
    printf("\n");
    
    cont=0;
    for(i=0; i<3; i++)
        for(j=i; j<=2; j++){
            printf("Interaccion %d\n", cont+1);
            cont=cont+1;
        }
    return 0;
}


