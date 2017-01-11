
#include <stdio.h>
#include <stdlib.h>

//Pregunta un número al usuario y después pregunta qué bit quiere apagar y apágalo.
int bin[20];

int binario (int decimal, int i){
    int aux, max;
    i++;
    if(decimal == 0)
        return i-1;
    aux = decimal % 2;
    decimal /= 2;
    max = binario(decimal, i);
    bin[max-i] = aux;
    return max;

}

int main(){
    int numero, bit, max;
    printf("\n Introduce un numero: ");
    scanf(" %i", &numero);
    max = binario(numero, 0);
    for(int i = 0; i < max; i++){
        printf("%i", bin[i]);
    }
    printf("\n");
    for(int i = 0; i < max; i++)
        printf("%i", i + 1);
    printf("\n¿Qué bit quieres apagar?:\n");
    scanf(" %i", &bit);
    if (bin[bit - 1] == 1)
        bin[bit - 1] = 0;
    else printf("El bit ya está apagado.\n");
    printf("El numero final es:\n");
    for(int i = 0; i < max; i++)
        printf("%i", bin[i]);
    printf("\n");
   return EXIT_SUCCESS;
}
