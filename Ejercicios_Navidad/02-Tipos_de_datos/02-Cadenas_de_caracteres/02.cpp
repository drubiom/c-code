
#include <stdio.h>
#include <stdlib.h>
//Busca el final de una cadena de caracteres e imprímela de atrás hacia delante.
int main(){
    char cadena[] = "Hola me llamo David";
    int i = 0;
    while(cadena[i]!='\0'){
        i++;
    }
    for (int j = i - 1; j >= 0; j--){
    printf("%c", cadena[j]);
    }
    printf("\n");
    return EXIT_SUCCESS;
}
