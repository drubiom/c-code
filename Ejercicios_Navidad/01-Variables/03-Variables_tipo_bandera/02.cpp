
#include <stdio.h>
#include <stdlib.h>

//Escribe un programa que pregunte 10 números y diga el mayor.

int main(){
    int numero, aux = 0;
    for(int i = 0; i < 10; i++){
        printf("Introduce un número: [%i]\n", i+1);
        scanf(" %i", &numero);
        if(numero > aux)
            aux = numero;
    }
    printf("El número más alto que has introducido es %i\n", aux);
    return EXIT_SUCCESS;
}
