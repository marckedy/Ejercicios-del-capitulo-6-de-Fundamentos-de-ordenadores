
#include <stdio.h>
#include <stdlib.h>

int main() {
    int x=-3,f, menor;
    
    do{
        f=5*(x*x)+(3*x)+8;
        if(menor>f)
            menor=f;
        x++;
    }while(x<=10);

    
    x=menor;
    f=5*(x*x)+(3*x)+8;
    printf("El valor minimo de la funcion f(x) es: %d\n",f);
    printf("y se alcanza en x=%d",x);
    return 0;
}
