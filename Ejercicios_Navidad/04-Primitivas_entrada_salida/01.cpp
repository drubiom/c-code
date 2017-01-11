
#include <stdio.h>
#include <stdlib.h>

//Imprime el código ASCII poniendo el número y el carácter que les corresponde.

int main(){
    int i;
    printf("CARACTERES ASCII IMPRIMIBLES:\n");
    for(i = 33; i < 128; i++){
        printf("Código: %i ----> Caracter: %c\n", i, i);
    }
   return EXIT_SUCCESS;
}
