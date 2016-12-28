
#include <stdio.h>
#include <stdlib.h>

//Pregúntale al usuario su letra preferida y almacenala en una variable.

int main(){
    char letra;
    printf("Introduce tu letra favorita\n");
    scanf(" %c", &letra);
    while(letra < 65 || letra > 122 || (letra<97 && letra>90)){
        printf("\nEso no es una letra!! introduce de nuevo:");
        scanf(" %c", &letra);
    }
    printf("\nMuchas gracias.\n");
    return EXIT_SUCCESS;
}
