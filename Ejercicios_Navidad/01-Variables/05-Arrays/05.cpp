
#include <stdio.h>
#include <stdlib.h>

//Imprime una palabra almacenada en un array.

int main(){
    char palabra[] = {'B','a','l','t','a','s','a','r',0};
    printf("Palabra: ");
    for(int i = 0; palabra[i] != 0; i++)
        printf("%c", palabra[i]);
    printf("\n");
    return EXIT_SUCCESS;
}
