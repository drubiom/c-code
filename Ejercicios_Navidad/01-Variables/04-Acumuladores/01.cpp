
#include <stdio.h>
#include <stdlib.h>

//Escribe un programa que, sin utilizar arrays, calcule la media de 10 números cualquiera dados por el usuario.

int main(){
    int numero;
    float sum = 0;
    for(int i = 0; i < 10; i++){
        printf("Introduce un número: [%i]\n", i+1);
        scanf(" %i", &numero);
        sum += numero;
    }
    printf("La media de los números introducidos es %.2f\n", sum/10);
    return EXIT_SUCCESS;
}
