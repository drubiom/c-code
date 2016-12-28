
#include <stdio.h>
#include <stdlib.h>

//Escribe un programa que intercambie dos números.

int main(){
    char numero[2], aux;
    printf("Introduce un numero de 2 cifras:\n");
    scanf(" %s", numero);
    aux = numero[0];
    numero[0] = numero [1];
    numero[1] = aux;
    printf("\nEl número intercambiado es: %s.\n", numero);

    return EXIT_SUCCESS;
}
