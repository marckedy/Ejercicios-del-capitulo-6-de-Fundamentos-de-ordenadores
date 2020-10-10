#include <stdio.h>
#include <stdlib.h>

int main() {
    int x,y;
    
    while((x<1) || (x>10)){
        printf("Introduzca un valor entre 1 y 10\n");
        scanf("%d",&x);
    }
    y=1;
    printf("\n");
    while(y<=10){
        printf("%d x %d = %d\n",x,y,(x*y));
        y++;
    }
    
    return 0;
}
