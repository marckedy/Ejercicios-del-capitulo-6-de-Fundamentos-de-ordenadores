#include <stdio.h>
#include <stdlib.h>

int main() {
    char frase;
    printf("Introduzca la cadena de caracteres con un punto al final\n");
    
    do{
        scanf("%c",&frase);
        switch(frase){
            case 'a': frase='e'; break;
            case 'e': frase='i'; break;
            case 'i': frase='o'; break;
            case 'o': frase='u'; break;
            case 'u': frase='a'; break;
        }
        printf("%c",frase);
    }while(frase!='.');

    return 0;
}

