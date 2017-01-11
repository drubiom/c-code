
#include <stdio.h>
#include <stdlib.h>

//Pregunta al usuario su número favorito y guárdalo en una variable.

int main(){
    int numero;
    printf("Introduce tu número favorito:\n");
    scanf(" %i", &numero);
    printf("Tu numero favorito es el %i\n", numero);
   return EXIT_SUCCESS;
}
