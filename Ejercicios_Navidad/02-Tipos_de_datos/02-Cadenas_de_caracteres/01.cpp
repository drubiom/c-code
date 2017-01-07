
#include <stdio.h>
#include <stdlib.h>
//Convierte una cadena de caracteres con el dni a un entero. Usa sscanf y atoi.
int main(){
    char dnichar[9] = "47589875";
    int dninum;
    dninum = atoi(dnichar);
    printf("%i", dninum);
    return EXIT_SUCCESS;
}
