
#include <stdio.h>
#include <stdlib.h>

//Rellena una lista de 10 elementos con los cuadrados de los números naturales. 1, 4, 9, 16, ...

int main(){
    int lista[10];
    for(int i = 0; i < 10; i++){
        lista[i] = (i + 1) * (i + 1);
        printf("%i\n", lista[i]);
    }
    return EXIT_SUCCESS;
}
