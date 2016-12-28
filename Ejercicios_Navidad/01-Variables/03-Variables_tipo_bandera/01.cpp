
#include <stdio.h>
#include <stdlib.h>

//Escribe un programa que diga si un número tiene algún divisor o no.

int main(){
    int numero, aux = 0;
    printf("Introduce un número:");
    scanf(" %i", &numero);
    for(int i = 2; i < numero; i++)
        if(numero % i == 0){
            printf("%i es divisible entre %i\n", numero, i);
            aux = 1;
        }
    if(aux == 0)
        printf("%i No tiene ningún divisor excepto 1 y él mismo.\n", numero);
    return EXIT_SUCCESS;
}
