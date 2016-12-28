
#include <stdio.h>
#include <stdlib.h>

//Escribe un programa que pregunte la edad al usuario y la guarde en una variable.

int main(){
    int edad;
    printf("¿Cuántos años tienes?\n");
    scanf(" %i", &edad);
    while(edad < 0 || edad > 117){
        printf("\nLa edad introducida no es correcta, introduce de nuevo:");
        scanf(" %i", &edad);
    }
    printf("\nMuchas gracias.\n");
    return EXIT_SUCCESS;
}
