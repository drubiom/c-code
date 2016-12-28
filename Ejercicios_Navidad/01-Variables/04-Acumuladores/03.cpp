
#include <stdio.h>
#include <stdlib.h>

//Escribe un programa que diga si un número es perfecto o no.

int main(){
    long long int n,x,contador;
    contador = 0;
    printf("Introduce un número:\n");
    scanf("%lli",&n);

    for(x=1; x<n; x++)
        if (n % x == 0)
            contador+=x;
    if (contador == n)
        printf("ES PERFECTO\n");
    else
        printf("NO ES PERFECTO\n");
    return EXIT_SUCCESS;
}
