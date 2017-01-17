
#include <stdio.h>
#include <stdlib.h>

#define MAX 50

//Calcula la distancia entre dos letras introducidas por el usuario. Usa fgetc.

int main(){
    char car1, car2;
    printf("Introduce dos letras seguidas: ");
    car1 = fgetc(stdin);
    car2 = fgetc(stdin);
    if(car1 > car2)
        printf("La distancia entre letras es: %i\n", car1 - car2);
    else if (car1 < car2)
        printf("La distancia entre letras es: %i\n", car2 - car1);
    else
        printf("Es la misma letra.\n");
    return EXIT_SUCCESS;
}
