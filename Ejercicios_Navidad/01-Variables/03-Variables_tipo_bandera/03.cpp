
#include <stdio.h>
#include <stdlib.h>

//Escribe un programa que pregunte 10 números y diga el menor.

int main(){
    int numero, aux;
    printf("Introduce un número: [1]\n");
    scanf(" %i", &aux);
    for(int i = 0; i < 9; i++){
        printf("Introduce un número: [%i]\n", i+2);
        scanf(" %i", &numero);
        if(numero < aux)
            aux = numero;
    }
    printf("El número más bajo que has introducido es %i\n", aux);
    return EXIT_SUCCESS;
}
