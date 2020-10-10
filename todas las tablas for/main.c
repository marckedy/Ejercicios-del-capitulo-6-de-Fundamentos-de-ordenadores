
#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y;
    
    for(x=1; x<=10; x++){
        printf("\n");
        for(y=1; y<=10; y++)
            printf("%d x %d = %d\n",x,y,(x*y));
    }

    return 0;
}

