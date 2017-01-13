
#include <stdio.h>
#include <stdlib.h>

//Dado un numero entero invierte sus dígitos en otra variable. Ej: 731 => 137. La cantidad de dígitos es variable.

int main(){
    int numero[20], i = 0;
    printf("Introduce numero\n");
    scanf(" %i", numero);
    for(i; numero[i] != '\0'; i++)
        printf("%i", i);
    for(i; i >= 0; i--)
        printf("%i", numero[i]);
    return EXIT_SUCCESS;
}
