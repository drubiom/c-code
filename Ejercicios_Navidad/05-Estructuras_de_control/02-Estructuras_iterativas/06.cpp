
#include <stdio.h>
#include <stdlib.h>

//Rellena el triangulo de tartaglia en una matriz de 10x10. La columana de la izquierda (la 0) siempre vale 1. Cualquier otra celda es la suma de la de arriba mas la de arriba a la izquierda.

int main(){
    int triangulo[10][10];
    for(int i = 0; i < 9; i++){
        triangulo[i][0] = 1;
        for (int j = 1; j < 10; j++){
            if(i==1)
                triangulo[1][1] = 2;
            else if(i > 1){
                triangulo[i][j] = triangulo[i-1][j];
                triangulo[i][i] = triangulo[i-1][i-1] + 1;
            }
        }
    }
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++)
            if(triangulo[i][j] < 10 && triangulo[i][j] > 0)
            printf("%i", triangulo[i][j]);
        printf("\n");
    }
    printf("\n");
    return EXIT_SUCCESS;
}
