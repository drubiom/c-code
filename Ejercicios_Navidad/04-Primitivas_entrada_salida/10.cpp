
#include <stdio.h>
#include <stdlib.h>

//Pregunta al usuario su nombre y apellidos y guárdalo en un array de 15 caracteres. Asegúrate de que no hay desbordamiento.

int main(){
    char completo[15], temp[50];
    printf("Introduce tu nombre:\n");
    scanf(" %[^\n]",temp);
    for(int i = 0; i < 15; i++)
        completo[i] = temp[i];
    printf("Tu nombre es %s\n", completo);
   return EXIT_SUCCESS;
}
