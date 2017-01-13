
#include <stdio.h>
#include <stdlib.h>

//Carga una lista de 50 nombres en un array de 50x100.

int main(){
    char nombres[50][100];
    FILE *texto;
    texto = fopen("nombres.txt", "rb");
    for(int i = 0; i < 50; i++)
    fscanf(texto,"%s", nombres[i]);
    for(int i = 0; i < 50; i++)
         printf("%i.-%s\n", i+1, nombres[i]);
    fclose(texto);
   return EXIT_SUCCESS;
}
