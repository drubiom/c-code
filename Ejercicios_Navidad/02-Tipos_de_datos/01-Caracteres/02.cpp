
#include <stdio.h>
#include <stdlib.h>

//Imprime una cádena de caracteres con el cifrado de Julio César,
// donde cada caracter es incrementado en 3.
// De manera que, la 'a' pasaría a ser la 'd' y, la 'z' la 'c' .

int main(){
    int i = 0;
    char palabra[] = "Hola Caracola";
    printf("La cadena codificada es: ");
    while(palabra[i] != 0){
        palabra[i] += 3;
        printf("%c", palabra[i]);
        i++;
    }
    printf("\n");
    return EXIT_SUCCESS;
}
