
#include <stdio.h>
#include <stdlib.h>

//Pregúntale el nombre al usuario y almacénalo en un array de caracteres.

int main(){
    char nombre[15];
    printf("Introduce tu nombre:\n");
    scanf(" %s", &nombre);
    nombre[0] -= 32;
    printf("\nMuchas gracias %s.\n", nombre);

    return EXIT_SUCCESS;
}
