
#include <stdio.h>
#include <stdlib.h>

//Imprime el primer número de línea de un fichero en la que se encuentra la palabra que quiere buscar el usuario.

int main(){
    FILE *texto;
    texto = fopen("texto.txt", "rb");
    char c[50], palabra;
    printf("Palabra:");
    scanf(" %c", &palabra);
    //do{
        fscanf(texto, "%s", c);
        printf("%s",c);
    fscanf(texto, "%s", c);
    printf("%s",c);
    fscanf(texto, "%s", c);
    printf("%s",c);
        //}while (*c != palabra);
    fclose(texto);
   return EXIT_SUCCESS;
}
