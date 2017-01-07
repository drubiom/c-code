
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
//Haz una barra de estado que crezca de izquierda a derecha compuesta por '=' y terminada en '>'. Ej: ====> Pista usa \r
int main(){
    for(int i = 0; i < 60; i++){
        printf("=");
        sleep(1);
    }
    printf(">\n");
    return EXIT_SUCCESS;
}
