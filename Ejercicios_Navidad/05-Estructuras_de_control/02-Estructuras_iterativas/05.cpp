
#include <stdio.h>
#include <stdlib.h>

//Dado un numero entero invierte sus dígitos en otra variable. Ej: 731 => 137. La cantidad de dígitos es variable.

int main(){
    char numero[20];
    int i = 0;
    printf("Introduce numero\n");
    scanf(" %s", numero);
    for(i; numero[i] != '\0' ; i++)
        printf(" ");
    printf("\n");
    for(i; i >= 0; i--)
        printf("%c", numero[i]);
    printf("\n");
    return EXIT_SUCCESS;
}
