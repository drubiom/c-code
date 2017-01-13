
#include <stdio.h>
#include <stdlib.h>

//Escribe n asteriscos en pantalla. Pregunta el valor de n al usuario.

int main(){
    int numero;
    printf("Introduce numero\n");
    scanf(" %i", &numero);
    for (int i = 0;i < numero;i++){
        for(int j = 0; j < numero; j++)
        printf("* ");
        printf("\n");
    }
    printf("\n");
    return EXIT_SUCCESS;
}
