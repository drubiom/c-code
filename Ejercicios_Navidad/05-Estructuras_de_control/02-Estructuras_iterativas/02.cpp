
#include <stdio.h>
#include <stdlib.h>

//Pregunta las notas de una clase e imprime la media. Se considera que no hay más notas cuando el usuario introduzca una nota negativa.

int main(){
    int cont = 0;
    double nota, total = 0;
    do{
    printf("Introduce nota:(negativa para terminar)\n");
    scanf(" %lf", &nota);
    if (nota >= 0){
        total += nota;
        cont++;
    }
    }while(nota >= 0);
    printf("La media de las notas introducidas es %.2lf", total / cont);
    return EXIT_SUCCESS;
}
