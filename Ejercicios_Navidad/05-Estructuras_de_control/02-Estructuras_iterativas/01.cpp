
#include <stdio.h>
#include <stdlib.h>

//Pregunta repetidamente al usuario un número de 1 a 10 mientras meta números mayores o menores.

int main(){
    int numero;
    do{
    printf("Introduce un número del 1 al 10:\n");
    scanf(" %i", &numero);
    }while(numero < 1 || numero > 10);
    return EXIT_SUCCESS;
}
