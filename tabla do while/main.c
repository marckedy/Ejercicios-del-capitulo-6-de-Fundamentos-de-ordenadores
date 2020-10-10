#include <stdio.h>
#include <stdlib.h>

int main() {
    int x,y;
    
    
    do{
        printf("Introduzca un valor entre 1 y 10\n");
        scanf("%d",&x);
    }while((x<1) || (x>10));
    y=1;
    printf("\n");
    do{
        printf("%d x %d = %d\n",x,y,(x*y));
        y++;
    }while(y<=10);
    
    
    return 0;
}
