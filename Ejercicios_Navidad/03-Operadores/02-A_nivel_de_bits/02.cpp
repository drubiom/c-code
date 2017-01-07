#include <stdio.h>
#include <stdlib.h>

//Desarrolla un programa que convierta a hexadecimal.

void cambio(int decimal){
  int cociente, resto;
  cociente = decimal / 16;
  resto = decimal % 16;
  switch (resto){
      case 10: resto = 65;
               break;
      case 11: resto = 66;
               break;
      case 12: resto = 67;
               break;
      case 13: resto = 68;
               break;
      case 14: resto = 69;
               break;
      case 15: resto = 70;
               break;
      default: break;
  }
  if(cociente != 0)
      cambio(cociente);
  if(resto<10)
      printf("%i", resto);
  else
      printf("%c", resto);
}

int main(){
    int ndecimal, base;
    printf("\nIntroduce un numero:");
    scanf("%i",&ndecimal);
    printf("El numero en hexadecimal es: ");
    cambio(ndecimal);
    printf("\n");
    return EXIT_SUCCESS;
}
