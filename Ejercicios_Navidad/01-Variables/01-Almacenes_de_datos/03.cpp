
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//Pregúntale el nombre al usuario y almacénalo en un array de caracteres.

int main(){
    char nombre[15];
    printf("Introduce tu nombre:\n");
    scanf(" %s", &nombre);
    nombre[0] -= 32;
    printf("\nMuchas gracias %s.\n", nombre);

    letra = (letra < 'z') ? letra + 'A' - 'a': letra;
    return EXIT_SUCCESS;
}
