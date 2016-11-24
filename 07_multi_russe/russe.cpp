
#include <stdio.h>
#include <stdlib.h>

int main(){
    //Declaro las variables op1, op2, resultado
    int op1, op2, resultado;
    //Pedir op1 y op2 al usuario
    printf("Introduce primer nº:");
    scanf(" %i", &op1);
    printf("Introduce segundo nº:");
    scanf(" %i", &op2);
    //Poner resultado=0
    resultado = 0;
    do{
    //Si op2 es impar
    if(op2 % 2 == 1)
    //  acumular op1 en resultado
        resultado += op1;
    //Divide op2/2
    op2 /= 2;
    //Duplica op1
    op1 *= 2;
    //Repetir si op1 es mayor que 0
    }while(op1 > 0);
    printf("Resultado: %i \n", resultado);
   return EXIT_SUCCESS;
}
