
#include <stdio.h>
#include <stdlib.h>

//Imprime todas las líneas de un fichero que consistan únicamente una palabra entre corchetes.


//NO HE CONSEGUIDO QUE IMPRIMA LAS QUE SOLO TIENEN UNA PALABRA ENTRE CORCHETES, IMPRIME AUNQUE TENGA MAS DE UNA PALABRA.




int main(){
    FILE *texto;
    texto = fopen("texto.txt", "rb");
    int c = fgetc(texto);
    while (c != EOF){
        if(c == '['){
            c = fgetc(texto);
            do{
                putchar(c);
                c = fgetc(texto);
            }while(c != ']');
            printf("\n");
        }
        c = fgetc(texto);
    }
    fclose(texto);
   return EXIT_SUCCESS;
}
