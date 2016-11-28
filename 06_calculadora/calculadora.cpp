#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, o1, o2;
    char op, aux;
    system("clear");
    system("toilet --gay CALCULADORA BÁSICA");

    printf("\nIntroduce el primer número:");
    scanf(" %i", &o1);
    printf("\n Introduce el segundo número:");
    scanf(" %i", &o2);
    printf("\n Indica la operación que quieres realizar: ");
    printf("\n\t 1.-SUMA");
    printf("\n\t 2.-RESTA");
    printf("\n\t 3.-MULTIPLICACIÓN");
    printf("\n\t 4.-DIVISIÓN");
    printf("\n\t 5.-CUADRADO");
    scanf(" %c", &op);
    do{
      switch(op){
          case '1': printf("\n Suma de %i + %i = %i", o1, o2, o1+o2);
                    break;
          case '2': printf("\n Resta de %i - %i = %i", o1, o2, o1-o2);
                    break;
          case '3': printf("\n Multiplicación de %i * %i = %i", o1, o2, o1*o2);
                    break;
          case '4': printf("\n División de %i / %i = %i y el resto es: %i", o1, o2, o1/o2, o1%o2);
                    break;
          case '5': printf("\n %i elevado a %i es %i", o1,  o2, o2*o2);
                    break;
          default: printf("\n Esa operación no está permitida. Introduce otra operación:");
                   printf("\n\t 1.-SUMA");
                   printf("\n\t 2.-RESTA");
                   printf("\n\t 3.-MULTIPLICACIÓN");
                   printf("\n\t 4.-DIVISIÓN");
                   printf("\n\t 5.-CUADRADO");

                   scanf (" %c", &op);
                   break;
      }
    }while(op!='1' && op!='2' && op!='3' && op!='4' && op!='5');
    printf("\n Quieres hacer otra operación? (S/N):");
    scanf(" %c", &aux);
    switch(aux){
        case 'S': system("clear");
                  main();
                  break;
        case 's': system("clear");
                  main();
                  break;
        case 'N': break;
        case 'n': break;
        default : system("clear");
                  main();
                  break;
    }
    system("clear");
    system("toilet --gay GRACIAS POR UTILIZAR LA CALCULADORA");
    return EXIT_SUCCESS;
}
