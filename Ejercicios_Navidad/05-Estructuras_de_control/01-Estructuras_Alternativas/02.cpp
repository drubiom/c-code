
#include <stdio.h>
#include <stdlib.h>

//Imprime un menú que dé la opción de calcular el area de 5 figuras geómetricas distintas, pida los datos correspondientes y calcule el área correspondiente.

#define PI 3.14159

int main(){
    int opc;
    double lado, lado2;
    printf("Áreas Geométricas\n\n");
    printf("\t1.-Cuadrado.\n");
    printf("\t2.-Rectángulo.\n");
    printf("\t3.-Triángulo.\n");
    printf("\t4.-Circulo.\n");
    printf("\t5.-Pentágono.\n");
    printf("Introduce una opción:\n");
    scanf(" %i", &opc);
    do{
      switch(opc){
         case 1:system("clear");
                printf("\tCuadrado\n\n");
                printf("¿Cuánto mide el lado?:");
                scanf(" %lf", &lado);
                printf("El área del CUADRADO es %.2lf\n", lado * lado);
                break;
         case 2:system("clear");
                printf("\tRectángulo\n\n");
                printf("¿Cuánto mide el lado1?:");
                scanf(" %lf", &lado);
                printf("¿Cuánto mide el lado2?:");
                scanf(" %lf", &lado2);
                printf("El área del RECTÁNGULO es %.2lf\n", lado * lado2);
                break;
         case 3:system("clear");
                printf("\tTriángulo\n\n");
                printf("¿Cuánto mide la base?:");
                scanf(" %lf", &lado);
                printf("¿Cuánto mide la altura?:");
                scanf(" %lf", &lado2);
                printf("El área del TRIÁNGULO es %.2lf\n", lado * lado2);
                break;
         case 4:system("clear");
                printf("\tCírculo\n\n");
                printf("¿Cuánto mide el radio?:");
                scanf(" %lf", &lado);
                printf("El área del CIRCULO es %.2lf\n", (lado * lado * PI));
                break;
         case 5:system("clear");
                printf("\tPentágono Regular\n\n");
                printf("¿Cuánto mide el lado?:");
                scanf(" %lf", &lado);
                printf("¿Cuánto mide la apotema):");
                scanf(" %lf", &lado2);
                printf("El área del PENTÁGONO es %.2lf\n", (lado * 5 * lado2 ) / 2);
                break;
         default :printf("Esta opción no es válida. Vuelve a introducir una opción:");
                  scanf(" %i", &opc);
                  break;
      }
    }while(opc < 0 || opc > 5);
   return EXIT_SUCCESS;
}
