#include <stdio.h>
#include <stdlib.h>

//Haz un programa que multiplique cualquier número por 320 ( = 256 + 64  ) usando el operador de desplazamiento de bits, en lugar del operador de multiplicación.

int main(){
    int numero, aux1, aux2;
    printf("\nIntroduce un numero:");
    scanf("%i",&numero);
    aux1 = numero << 8;
    aux2 = numero << 6;
    printf("El numero introducido multiplicado por 320 es: %i\n", aux1 + aux2);
    return EXIT_SUCCESS;
}
