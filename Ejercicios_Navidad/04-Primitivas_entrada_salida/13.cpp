
#include <stdio.h>
#include <stdlib.h>

//Imprime la longitud de un fichero. Usa rewind

int main(){
    FILE *texto;
    texto = fopen("texto.txt", "rb");
    int c, i=0;
    rewind(texto);
    while ((c = fgetc (texto)) != EOF)
        i++;
    fclose(texto);
    printf("El archivo tiene %i caracteres\n", i);
   return EXIT_SUCCESS;
}
