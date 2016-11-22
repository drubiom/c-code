#include <stdio.h>
#include <stdlib.h>

int main(){
    char car;
    while(car!=27){
      printf("\nIntroduce un carácter alfanumérico: (ESC para salir)");
      scanf(" %c", &car);
      if(car!=27)
        printf("\nEl código ASCII del carácter %c es %i", car, car);
    }
    return EXIT_SUCCESS;
}
