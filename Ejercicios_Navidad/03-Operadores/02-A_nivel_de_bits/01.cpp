#include <stdio.h>
#include <stdlib.h>

//Haz un programa que convierta cualquier número expresado en decimal a cualquier base menor de diez.
//
void cambio(int decimal, int base){
  int temp;
  if(decimal == 0)
      return;
  temp = decimal % base;
  decimal = decimal / base;
  cambio(decimal, base);
  printf("%d",temp);

}

int main(){
    int ndecimal, base;
    printf("\nIntroduce un numero:");
    scanf("%i",&ndecimal);
    printf("\nIntroduce la base [1-9]:");
    scanf("%i",&base);
    cambio(ndecimal, base);
    printf("\n");
    return EXIT_SUCCESS;
}
