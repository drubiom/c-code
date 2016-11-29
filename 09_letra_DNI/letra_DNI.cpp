#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILAS 24

int main(){
    int resto, numero;
    char letra[FILAS] = {'T','R','W','A','G','M','Y','F','P','D','X','B','N','J','Z','S','Q','V','H','L','C','K','E'};

    do{
    printf("Introduce el número de DNI: (sin ceros delante)");
    scanf(" %s", &numero);
    }while(numero < 0 || numero > 99999999);
    //¿Quitar ceros a la izquierda?
    resto = numero % 23;
    printf("\n La letra del DNI es: %c\n", letra[resto]);

    return EXIT_SUCCESS;
}
