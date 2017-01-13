
#include <stdio.h>
#include <stdlib.h>

//Escribe n asteriscos en pantalla. Pregunta el valor de n al usuario.

int main(){
    int numero;
    printf("Introduce numero\n");
    scanf(" %i", &numero);
    for (int i = 0;i < numero;i++)
        printf("*");
    printf("\n");
    return EXIT_SUCCESS;
}
