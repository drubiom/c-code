
#include <stdio.h>
#include <stdlib.h>

//Rellena una lista con los 20 primeros números de la sucesión de Fibonacci, donde un elemento es la suma de los dos anteriores, y los dos primeros son 1. Ej: 1, 1, 2, 3, 5, ...

int main(){
    long long int prev2 = 1, prev = 0, act = 1;
    for(int i = 0; i < 20; i++){
        act = prev2 + prev;
        prev2 = prev;
        prev = act;
        printf("%lli \n", act);
    }
    return EXIT_SUCCESS;
}
