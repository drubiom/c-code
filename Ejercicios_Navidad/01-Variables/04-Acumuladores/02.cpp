
#include <stdio.h>
#include <stdlib.h>

//Escribe un programa que multiplique dos números cualquiera a la Russe.

int main(){
    int op1, op2, resultado = 0;
    printf("Introduce primer nº:");
    scanf(" %i", &op1);
    printf("Introduce segundo nº:");
    scanf(" %i", &op2);
    do{
        if(op2 % 2 == 1)
            resultado += op1;
        op2 /= 2;
        op1 *= 2;
    }while(op1 > 0);
    printf("Resultado: %i \n", resultado);
    return EXIT_SUCCESS;
}
