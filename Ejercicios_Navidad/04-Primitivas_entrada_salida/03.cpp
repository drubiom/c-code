
#include <stdio.h>
#include <stdlib.h>

//Rellena un array de caracteres con dos palabras que te de el usuario y hayan quedado almacenadas por separado. Usa sprintf.

int main(){
    char palabras[50], palabra1[10], palabra2[10];
    printf("Introduce palabra 1:\n");
    scanf(" %s", palabra1);
    printf("Introduce palabra 2:\n");
    scanf(" %s", palabra2);
    sprintf(palabras,"%s %s", palabra1, palabra2);
    printf("%s\n", palabras);
   return EXIT_SUCCESS;
}
