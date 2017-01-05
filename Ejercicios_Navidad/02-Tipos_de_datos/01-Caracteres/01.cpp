
#include <stdio.h>
#include <stdlib.h>

//Calcula la distancia entre dos letras introducidas por el usuario. Usa fgetc.

int main(){
    int i = 0;
    char palabra[] = "Melchor Gaspar Baltasar ";
    while(palabra[i] != 0){
        printf("Palabra: ");
        for(i ; palabra[i] != ' '; i++)
            printf("%c", palabra[i]);
        i++;
        printf("\n");
    }
    printf("\n");
    return EXIT_SUCCESS;
}
