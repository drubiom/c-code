
#include <stdio.h>
#include <stdlib.h>

//Haz un programa que lea los Hi Scores de un fichero y los imprima en pantalla

int main(){
    FILE *texto;
    texto = fopen("scores.txt", "rb");
    int score[3]={0,0,0}, aux;
    fscanf(texto,"%i", &aux);
    printf("Todas las puntuaciones:\n");
    while(aux != 0){
    printf("%i\n", aux);
    if(aux > score[0]){
        score[2] = score[1];
        score[1] = score[0];
        score[0] = aux;
    }
    else if(aux > score[1]){
        score[2] = score[1];
        score[1] = aux;
    }
    else if(aux > score[2])
        score[2] = aux;
    fscanf(texto, "%i", &aux);
    }
    printf("\n\n\tTOP 3 SCORES:\n");
    for(int i = 0;i < 3; i++)
        printf("\t%i.-%i\n", i + 1, score[i]);
    return EXIT_SUCCESS;
}
