#include <stdio.h>
#include <stdlib.h>

int main(){
    int decimal;

    printf("Decimal: ");
    scanf(" %i", &decimal);

    do{
        printf("%i", decimal % 2);
        decimal /= 2;
    }while(decimal>0);

    printf("\n");

    return EXIT_SUCCESS;
}
