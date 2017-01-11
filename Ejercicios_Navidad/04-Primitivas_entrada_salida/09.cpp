
#include <stdio.h>
#include <stdlib.h>

//Pregunta al usuario su nombre y apellidos y guárdalo en un array de caracteres.

int main(){
    char completo[70], nombre[20], apellido1[20], apellido2[20];
    printf("Introduce tu nombre:\n");
    scanf(" %s", nombre);
    printf("Introduce tu primer apellido:\n");
    scanf(" %s", apellido1);
    printf("Introduce tu segundo apellido: \n");
    scanf(" %s", apellido2);
    sprintf(completo,"%s %s %s", nombre, apellido1, apellido2);
    printf("Tu nombre es %s\n", completo);
   return EXIT_SUCCESS;
}
