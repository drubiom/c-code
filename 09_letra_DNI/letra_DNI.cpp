#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int resto, numero;
    char letra [] = "TRWAGMYFPDXBNJZSQVHLCKE";

    do{
    printf("Introduce el número de DNI: (sin ceros delante)");
    scanf(" %i", &numero);
    }while(numero < 0 || numero > 99999999);

    //¿Quitar ceros a la izquierda?
    printf("\n La letra del DNI es: %c\n", letra[numero % 23]);

    return EXIT_SUCCESS;
}
