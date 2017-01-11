
#include <stdio.h>
#include <stdlib.h>

//Imprime un fichero carácter a carácter. fgetc.

int main(){
    FILE *texto;
    texto = fopen("texto.txt", "rb");
    int c;
    while ((c = fgetc (texto)) != EOF)
        putchar(c);
    fclose(texto);
   return EXIT_SUCCESS;
}
