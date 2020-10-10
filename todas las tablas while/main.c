
#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y;
    
    while(x<10){
        x++;
        y=0;
        printf("\n");
        while(y<10){
            y++;
            printf("%d x %d = %d\n",x,y,(x*y));
        }
    }
    return 0;
}

