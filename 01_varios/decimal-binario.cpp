#include <stdio.h>
#include <stdlib.h>

void bin(int decimal){
  int temp;
  if(decimal==0)
      return;
  temp=decimal%2;
  decimal=decimal/2;
  bin(decimal);
  printf("%d",temp);

}

int main(){
    int ndecimal;
    while (ndecimal!=0){
    printf("\nIntroduce un numero:");
    scanf("%i",&ndecimal);
    printf("El número en binario es:");
    bin(ndecimal);
    }
    return EXIT_SUCCESS;
}
