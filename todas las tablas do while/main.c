
#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y;
    
    do{
        x++;
        y=0;
        printf("\n");
        do{
            y++;
            printf("%d x %d = %d\n",x,y,(x*y));
        }while(y<10);
    }while(x<10);
    return 0;
}

