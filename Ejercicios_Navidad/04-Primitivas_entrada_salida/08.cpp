
#include <stdio.h>
#include <stdlib.h>

//Pregunta al usuario su nombre y guárdalo en un array de carácteres.

int main(){
    char nombre[20];
    printf("Introduce tu nombre:\n");
    scanf(" %s", nombre);
    printf("Tu nombre es: %s\n", nombre);
   return EXIT_SUCCESS;
}
