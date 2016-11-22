#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, o1, o2;
    char op, aux;
    system("clear");
    for(i=0;i<50;i++){
        printf("-");
      }
    printf("\n Bienvenido a una calculadora básica \n");
    for(i=0;i<50;i++){
        printf("-");
      }

    printf("\nIntroduce el primer número:");
    scanf(" %i", &o1);
    printf("\n Introduce el segundo número:");
    scanf(" %i", &o2);
    printf("\n Indica la operación que quieres realizar (+,-,*,/,1(cuadrado)):");
    scanf(" %c", &op);
    do{
      switch(op){
          case '+': printf("\n Suma de %i + %i = %i", o1, o2, o1+o2);
                    break;
          case '-': printf("\n Resta de %i - %i = %i", o1, o2, o1-o2);
                    break;
          case '*': printf("\n Multiplicación de %i * %i = %i", o1, o2, o1*o2);
                    break;
          case '/': printf("\n División de %i / %i = %i y el resto es: %i", o1, o2, o1/o2, o1%o2);
                    break;
          case '1': printf("\n El cuadrado de %i es  %i y el cuadrado de %i es %i", o1, o1*o1, o2, o2*o2);
                    break;
          default: printf("\n Esa operación no está permitida. Introduce otra operación (+-*/):");
                   scanf (" %c", &op);
                   break;
      }
    }while(op!='+' && op!='-' && op!='*' && op!='/' && op!='1');
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
    for(i=0;i<50;i++){
        printf("-");
    }
    printf("\n GRACIAS POR UTILIZAR LA CALCULADORA \n");
    for(i=0;i<50;i++){
        printf("-");
    }
    return EXIT_SUCCESS;
}
