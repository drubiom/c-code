
#include <stdio.h>
#include <stdlib.h>
//En una clase con 17 alumnos por fila y 10 filas (Sí, 170 alumnos. ¡Qué desconcierto en la fp!) haz un programa que pregunte el número de lista e indique al alumno la fila y la columna que le corresponden (los alumnos empiezan a numerar por el número 1).
int main(){
    int lista;
    do{
    printf("¿Número de lista? [1-170]:");
    scanf(" %i", &lista);
    }while(lista > 170 || lista < 1);
    lista -= 1;
    printf("Fila: %i Columna: %i\n", lista / 17 + 1, lista % 17 + 1);
    return EXIT_SUCCESS;
}
