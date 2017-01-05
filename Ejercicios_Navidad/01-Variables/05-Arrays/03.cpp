
#include <stdio.h>
#include <stdlib.h>

//Inicializa una lista de enteros con los los códigos ascii de las letras de tu nombre. Añade el valor centinela 0 al final.

int main(){
    int nombre[]={68,97,118,105,100,0};
    printf("El nombre es: ");
    for(int i = 0; nombre[i] != 0; i++)
        printf("%c", nombre[i]);
    printf("\n");
    return EXIT_SUCCESS;
}
